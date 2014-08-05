#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGERTYPEPROXYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class DebuggerTypeProxyAttribute
				: public mscorlib::System::Attribute
				, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
			{
			public:
				DebuggerTypeProxyAttribute(mscorlib::System::String typeName)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerTypeProxyAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)typeName;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerTypeProxyAttribute(mscorlib::System::Type type)
				: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.DebuggerTypeProxyAttribute"))
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Type");
					__parameters__[0] = (MonoObject*)type;
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "DebuggerTypeProxyAttribute", 1, __parameter_types__, __parameters__);
				};
			
				DebuggerTypeProxyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Attribute(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
				{
				};
			
				DebuggerTypeProxyAttribute(MonoObject *nativeObject)
				: mscorlib::System::Attribute(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
				{
				};
			
				~DebuggerTypeProxyAttribute()
				{
				};
			

				DebuggerTypeProxyAttribute & operator=(DebuggerTypeProxyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ProxyTypeName)) mscorlib::System::String  ProxyTypeName;
				__declspec(property(get=get_Target, put=set_Target)) mscorlib::System::Type  Target;
				__declspec(property(get=get_TargetTypeName, put=set_TargetTypeName)) mscorlib::System::String  TargetTypeName;
				__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

				//Get Set Properties Methods
				//	Get:ProxyTypeName
				mscorlib::System::String  get_ProxyTypeName() const;

				//	Get/Set:Target
				mscorlib::System::Type  get_Target() const;
				void set_Target(mscorlib::System::Type  value);

				//	Get/Set:TargetTypeName
				mscorlib::System::String  get_TargetTypeName() const;
				void set_TargetTypeName(mscorlib::System::String  value);

				//	Get:TypeId
				mscorlib::System::Object  get_TypeId() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
