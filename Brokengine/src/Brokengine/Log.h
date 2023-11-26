#pragma once

#include "memory.h"

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Brokengine
{
	class Brokengine_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};

}

//Core Log macros
#define BE_CORE_TRACE(...)    ::Brokengine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BE_CORE_INFO(...)     ::Brokengine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BE_CORE_WARN(...)     ::Brokengine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BE_CORE_ERROR(...)    ::Brokengine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BE_CORE_FATAL(...)    ::Brokengine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log macros
#define BE_TRACE(...)         ::Brokengine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BE_INFO(...)          ::Brokengine::Log::GetClientLogger()->info(__VA_ARGS__)
#define BE_WARN(...)          ::Brokengine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BE_ERROR(...)         ::Brokengine::Log::GetClientLogger()->error(__VA_ARGS__)
#define BE_FATAL(...)         ::Brokengine::Log::GetClientLogger()->fatal(__VA_ARGS__)