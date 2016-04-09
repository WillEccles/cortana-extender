#pragma once

namespace VoiceCommandService
{
	public ref class CEVoiceCommandService sealed : IBackgroundTask
    {
    public:
        CEVoiceCommandService();

		// Inherited via IBackgroundTask
		virtual void Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance ^taskInstance);
	};
}
