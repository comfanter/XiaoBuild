/**
  * @author cxx2020@outlook.com
  * @datetime 2023 -10:17 PM
 */
#include "MacXiaoService.h"
#include "../../AgentService.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"


static const FString SAgentServicePath = TEXT("/Library/LaunchDaemons/com.xiao.XiaoAgent.plist");

FMacBuildAgentService::FMacBuildAgentService(const FServiceCommandLineOptions& InOptions, const FServiceDesc& InServiceDesc)
	: FGenericService(InOptions, InServiceDesc)
{
	
}

bool FMacBuildAgentService::OnInstall()
{
	static const FString XmlContent = TEXT(
		"<?xml version=\"1.0\" encoding = \"UTF-8\"?>\n"
		"<plist version = \"1.0\">\n"
		"\t<dict>\n"
		"\t\t<key>Label</key>\n"
		"\t\t<string>com.xiao.AgentService</string>\n"
		"\n"
		"\t\t<key>ProgramArguments</key>\n"
		"\t\t<array>\n"
		"\t\t\t<string>/Applications/XiaoBuild/Engine/Binaries/Mac/XiaoAgentService</string>\n"
		"\t\t\t<string></string>\n"
		"\t\t</array>\n"
		"\n"
		"\t\t<key>RunAtLoad</key>\n"
		"\t\t<true/>\n"
		"\n"
		"\t\t<key>KeepAlive</key>\n"
		"\t\t<true/>\n"
		"\n"
		"\t\t<key>StandardErrorPath</key>\n"
		"\t\t<string>/Library/Logs/XiaoAgentService.err</string>\n"
		"\n"
		"\t\t<key>StandardOutPath</key>\n"
		"\t\t<string>/Library/Logs/XiaoAgentService.log</string>\n"
		"\t</dict>\n"
		"</plist>"
	);

	return FFileHelper::SaveStringToFile(XmlContent, *SAgentServicePath);
}

bool FMacBuildAgentService::OnStart()
{
	if (FAgentService::OnInitialize(TEXT("")))
	{
		double DeltaTime = 0.0f;
		double LastTime = FPlatformTime::Seconds();

		while (!IsEngineExitRequested())
		{
			const float FloatDelta = static_cast<float>(DeltaTime);
			FAgentService::OnTick(FloatDelta);
			FTSTicker::GetCoreTicker().Tick(FloatDelta);

			FPlatformProcess::Sleep(FMath::Max<float>(0.0f, SIdleFrameTime - (FPlatformTime::Seconds() - LastTime)));

			const double CurrentTime = FPlatformTime::Seconds();
			DeltaTime = CurrentTime - LastTime;
			LastTime = CurrentTime;
		}

		FAgentService::OnDeinitialize();
		return true;
	}
	return false;
}

bool FMacBuildAgentService::OnStop()
{
	FAgentService::OnDeinitialize();
	return true;
}

bool FMacBuildAgentService::OnDelete()
{
	if (FPaths::FileExists(SAgentServicePath))
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		return PlatformFile.DeleteFile(*SAgentServicePath);
	}
	return true;
}