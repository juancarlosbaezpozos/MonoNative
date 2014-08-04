#include <mscorlib/System/Runtime/mscorlib_System_Runtime_GCSettings.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			//Public Methods
			//Get Set Static Properties Methods
			//	Get:IsServerGC
			mscorlib::System::Boolean  GCSettings::get_IsServerGC()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime", "GCSettings", 0, NULL, "get_IsServerGC", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:LatencyMode
			mscorlib::System::Runtime::GCLatencyMode::__ENUM__  GCSettings::get_LatencyMode()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime", "GCSettings", 0, NULL, "get_LatencyMode", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Runtime::GCLatencyMode::__ENUM__*)mono_object_unbox(__result__);
			}

			void GCSettings::set_LatencyMode(mscorlib::System::Runtime::GCLatencyMode::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Runtime", "GCSettings", 0, NULL, "set_LatencyMode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}




		}
	}
}
