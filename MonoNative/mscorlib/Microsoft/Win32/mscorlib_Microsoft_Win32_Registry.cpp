#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_Registry.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryKey.h>



namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			//Public Methods
			void Registry::SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(keyName).name());
					__parameter_types__[1] = Global::GetType(typeid(valueName).name());
					__parameter_types__[2] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)keyName;
					__parameters__[1] = (MonoObject*)valueName;
					__parameters__[2] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "SetValue", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void Registry::SetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(keyName).name());
					__parameter_types__[1] = Global::GetType(typeid(valueName).name());
					__parameter_types__[2] = Global::GetType(typeid(value).name());
					__parameter_types__[3] = Global::GetType(typeid(valueKind).name());
					__parameters__[0] = (MonoObject*)keyName;
					__parameters__[1] = (MonoObject*)valueName;
					__parameters__[2] = (MonoObject*)value;
					__parameters__[3] = reinterpret_cast<void*>(valueKind);
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "SetValue", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object Registry::GetValue(mscorlib::System::String keyName, mscorlib::System::String valueName, mscorlib::System::Object defaultValue)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(keyName).name());
					__parameter_types__[1] = Global::GetType(typeid(valueName).name());
					__parameter_types__[2] = Global::GetType(typeid(defaultValue).name());
					__parameters__[0] = (MonoObject*)keyName;
					__parameters__[1] = (MonoObject*)valueName;
					__parameters__[2] = (MonoObject*)defaultValue;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "GetValue", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

				//	Get/Set:ClassesRoot
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_ClassesRoot()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "ClassesRoot");
			}


				//	Get/Set:CurrentConfig
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_CurrentConfig()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "CurrentConfig");
			}


				//	Get/Set:CurrentUser
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_CurrentUser()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "CurrentUser");
			}


				//	Get/Set:DynData
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_DynData()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "DynData");
			}


				//	Get/Set:LocalMachine
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_LocalMachine()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "LocalMachine");
			}


				//	Get/Set:PerformanceData
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_PerformanceData()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "PerformanceData");
			}


				//	Get/Set:Users
			mscorlib::Microsoft::Win32::RegistryKey Registry::get_Users()
			{
				return Global::GetFieldValue("mscorlib", "Microsoft.Win32", "Registry", 0, NULL, "Users");
			}



		}
	}
}
