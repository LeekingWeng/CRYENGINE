// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

namespace CryAudio
{
namespace Impl
{
namespace Wwise
{
class CCVars final
{
public:

	CCVars(CCVars const&) = delete;
	CCVars(CCVars&&) = delete;
	CCVars& operator=(CCVars const&) = delete;
	CCVars& operator=(CCVars&&) = delete;

	CCVars() = default;

	void RegisterVariables();
	void UnregisterVariables();

	float m_velocityTrackingThreshold = 0.0f;
	float m_positionUpdateThresholdMultiplier = 0.02f;
	int   m_secondaryMemoryPoolSize = 0;
	int   m_prepareEventMemoryPoolSize = 0;
	int   m_streamManagerMemoryPoolSize = 0;
	int   m_streamDeviceMemoryPoolSize = 0;
	int   m_soundEngineDefaultMemoryPoolSize = 0;
	int   m_commandQueueMemoryPoolSize = 0;
	int   m_lowerEngineDefaultPoolSize = 0;
	int   m_enableEventManagerThread = 0;
	int   m_enableSoundBankManagerThread = 0;
	int   m_numSamplesPerFrame = 0;
	int   m_numRefillsInVoice = 0;
	int   m_panningRule = 0;

#if defined(INCLUDE_WWISE_IMPL_PRODUCTION_CODE)
	int m_enableCommSystem = 0;
	int m_enableOutputCapture = 0;
	int m_monitorMemoryPoolSize = 0;
	int m_monitorQueueMemoryPoolSize = 0;
#endif  // INCLUDE_WWISE_IMPL_PRODUCTION_CODE
};

extern CCVars g_cvars;
} // namespace Wwise
} // namespace Impl
} // namespace CryAudio