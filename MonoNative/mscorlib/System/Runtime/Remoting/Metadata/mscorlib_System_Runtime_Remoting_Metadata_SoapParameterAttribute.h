#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_METADATA_SOAPPARAMETERATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
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

					class SoapParameterAttribute
						: public mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
					{
					public:
						SoapParameterAttribute()
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Metadata.SoapParameterAttribute"))
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
						};
					
						SoapParameterAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						{
						};
					
						SoapParameterAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Metadata::SoapAttribute(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						{
						};
					
						~SoapParameterAttribute()
						{
						};
					

						SoapParameterAttribute & operator=(SoapParameterAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(SoapParameterAttribute &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_Embedded, put=set_Embedded)) mscorlib::System::Boolean  Embedded;
						__declspec(property(get=get_UseAttribute, put=set_UseAttribute)) mscorlib::System::Boolean  UseAttribute;
						__declspec(property(get=get_XmlNamespace, put=set_XmlNamespace)) mscorlib::System::String  XmlNamespace;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Get Set Properties Methods
						//	Get/Set:Embedded
						mscorlib::System::Boolean  get_Embedded() const;
						void set_Embedded(mscorlib::System::Boolean  value);

						//	Get/Set:UseAttribute
						mscorlib::System::Boolean  get_UseAttribute() const;
						void set_UseAttribute(mscorlib::System::Boolean  value);

						//	Get/Set:XmlNamespace
						mscorlib::System::String  get_XmlNamespace() const;
						void set_XmlNamespace(mscorlib::System::String  value);

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
