#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_RemotingConfiguration.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ActivatedClientTypeEntry.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ActivatedServiceTypeEntry.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownClientTypeEntry.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_WellKnownServiceTypeEntry.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				void RemotingConfiguration::Configure(mscorlib::System::String filename, mscorlib::System::Boolean ensureSecurity)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(filename).name());
						__parameter_types__[1] = Global::GetType(typeid(ensureSecurity).name());
						__parameters__[0] = (MonoObject*)filename;
						__parameters__[1] = reinterpret_cast<void*>(ensureSecurity);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "Configure", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::Configure(mscorlib::System::String filename)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(filename).name());
						__parameters__[0] = (MonoObject*)filename;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "Configure", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry*> RemotingConfiguration::GetRegisteredActivatedClientTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "GetRegisteredActivatedClientTypes", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry*> RemotingConfiguration::GetRegisteredActivatedServiceTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "GetRegisteredActivatedServiceTypes", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry*> RemotingConfiguration::GetRegisteredWellKnownClientTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "GetRegisteredWellKnownClientTypes", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry*> RemotingConfiguration::GetRegisteredWellKnownServiceTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "GetRegisteredWellKnownServiceTypes", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Boolean RemotingConfiguration::IsActivationAllowed(mscorlib::System::Type svrType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(svrType).name());
						__parameters__[0] = (MonoObject*)svrType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "IsActivationAllowed", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry RemotingConfiguration::IsRemotelyActivatedClientType(mscorlib::System::Type svrType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(svrType).name());
						__parameters__[0] = (MonoObject*)svrType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "IsRemotelyActivatedClientType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry(__result__);
				}

				mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry RemotingConfiguration::IsRemotelyActivatedClientType(mscorlib::System::String typeName, mscorlib::System::String assemblyName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(typeName).name());
						__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = (MonoObject*)assemblyName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "IsRemotelyActivatedClientType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry(__result__);
				}

				mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry RemotingConfiguration::IsWellKnownClientType(mscorlib::System::Type svrType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(svrType).name());
						__parameters__[0] = (MonoObject*)svrType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "IsWellKnownClientType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry(__result__);
				}

				mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry RemotingConfiguration::IsWellKnownClientType(mscorlib::System::String typeName, mscorlib::System::String assemblyName)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(typeName).name());
						__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
						__parameters__[0] = (MonoObject*)typeName;
						__parameters__[1] = (MonoObject*)assemblyName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "IsWellKnownClientType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry(__result__);
				}

				void RemotingConfiguration::RegisterActivatedClientType(mscorlib::System::Runtime::Remoting::ActivatedClientTypeEntry entry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entry).name());
						__parameters__[0] = (MonoObject*)entry;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterActivatedClientType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterActivatedClientType(mscorlib::System::Type type, mscorlib::System::String appUrl)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(appUrl).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)appUrl;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterActivatedClientType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterActivatedServiceType(mscorlib::System::Runtime::Remoting::ActivatedServiceTypeEntry entry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entry).name());
						__parameters__[0] = (MonoObject*)entry;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterActivatedServiceType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterActivatedServiceType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterActivatedServiceType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterWellKnownClientType(mscorlib::System::Type type, mscorlib::System::String objectUrl)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(objectUrl).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)objectUrl;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterWellKnownClientType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterWellKnownClientType(mscorlib::System::Runtime::Remoting::WellKnownClientTypeEntry entry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entry).name());
						__parameters__[0] = (MonoObject*)entry;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterWellKnownClientType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterWellKnownServiceType(mscorlib::System::Type type, mscorlib::System::String objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode::__ENUM__ mode)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(objectUri).name());
						__parameter_types__[2] = Global::GetType(typeid(mode).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)objectUri;
						__parameters__[2] = reinterpret_cast<void*>(mode);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterWellKnownServiceType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				void RemotingConfiguration::RegisterWellKnownServiceType(mscorlib::System::Runtime::Remoting::WellKnownServiceTypeEntry entry)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entry).name());
						__parameters__[0] = (MonoObject*)entry;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "RegisterWellKnownServiceType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean RemotingConfiguration::CustomErrorsEnabled(mscorlib::System::Boolean isLocalRequest)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(isLocalRequest).name());
						__parameters__[0] = reinterpret_cast<void*>(isLocalRequest);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "CustomErrorsEnabled", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Static Properties Methods
				//	Get:ApplicationId
				mscorlib::System::String  RemotingConfiguration::get_ApplicationId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "get_ApplicationId", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:ApplicationName
				mscorlib::System::String  RemotingConfiguration::get_ApplicationName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "get_ApplicationName", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RemotingConfiguration::set_ApplicationName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "set_ApplicationName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:CustomErrorsMode
				mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__  RemotingConfiguration::get_CustomErrorsMode()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "get_CustomErrorsMode", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__*)mono_object_unbox(__result__);
				}

				void RemotingConfiguration::set_CustomErrorsMode(mscorlib::System::Runtime::Remoting::CustomErrorsModes::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "set_CustomErrorsMode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:ProcessId
				mscorlib::System::String  RemotingConfiguration::get_ProcessId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingConfiguration", 0, NULL, "get_ProcessId", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}




			}
		}
	}
}