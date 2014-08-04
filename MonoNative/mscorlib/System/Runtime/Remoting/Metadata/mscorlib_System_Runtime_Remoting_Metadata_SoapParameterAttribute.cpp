#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapParameterAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Metadata
				{

					//Public Methods
					//Get Set Properties Methods
					//	Get/Set:Embedded
					mscorlib::System::Boolean  SoapParameterAttribute::get_Embedded()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_Embedded", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapParameterAttribute::set_Embedded(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_Embedded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:UseAttribute
					mscorlib::System::Boolean  SoapParameterAttribute::get_UseAttribute()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_UseAttribute", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SoapParameterAttribute::set_UseAttribute(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_UseAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:XmlNamespace
					mscorlib::System::String  SoapParameterAttribute::get_XmlNamespace()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "get_XmlNamespace", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void SoapParameterAttribute::set_XmlNamespace(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Metadata", "SoapAttribute", 0, NULL, "set_XmlNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:TypeId
					mscorlib::System::Object  SoapParameterAttribute::get_TypeId()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
