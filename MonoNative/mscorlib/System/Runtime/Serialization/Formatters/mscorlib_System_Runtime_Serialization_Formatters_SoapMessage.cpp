#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_SoapMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					//Public Methods
					//Get Set Properties Methods
					//	Get/Set:Headers
					std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  SoapMessage::get_Headers()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_Headers", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Messaging::Header (__array_item__));
						}
						return __array_result__;
					}

					void SoapMessage::set_Headers(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Runtime::Remoting::Messaging::Header*>(value, typeid(mscorlib::System::Runtime::Remoting::Messaging::Header).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_Headers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:MethodName
					mscorlib::System::String  SoapMessage::get_MethodName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_MethodName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMessage::set_MethodName(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_MethodName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ParamNames
					std::vector<mscorlib::System::String*>  SoapMessage::get_ParamNames()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_ParamNames", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
					}

					void SoapMessage::set_ParamNames(std::vector<mscorlib::System::String*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_ParamNames", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ParamTypes
					std::vector<mscorlib::System::Type*>  SoapMessage::get_ParamTypes()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_ParamTypes", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Type (__array_item__));
						}
						return __array_result__;
					}

					void SoapMessage::set_ParamTypes(std::vector<mscorlib::System::Type*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(value, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_ParamTypes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:ParamValues
					std::vector<mscorlib::System::Object*>  SoapMessage::get_ParamValues()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_ParamValues", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
					}

					void SoapMessage::set_ParamValues(std::vector<mscorlib::System::Object*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(value, typeid(mscorlib::System::Object).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_ParamValues", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlNameSpace
					mscorlib::System::String  SoapMessage::get_XmlNameSpace()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "get_XmlNameSpace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapMessage::set_XmlNameSpace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "SoapMessage", 0, NULL, "set_XmlNameSpace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
