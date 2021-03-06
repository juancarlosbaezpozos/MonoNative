#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_DEFAULTDEPENDENCYATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_LoadHint.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class DefaultDependencyAttribute
					: public mscorlib::System::Attribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					DefaultDependencyAttribute(mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__ loadHintArgument)
					: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.CompilerServices.DefaultDependencyAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.CompilerServices", "LoadHint");
						mscorlib::System::Int32 __param_loadHintArgument__ = loadHintArgument;
						__parameters__[0] = &__param_loadHintArgument__;
						__native_object__ = Global::New("mscorlib", "System.Runtime.CompilerServices", "DefaultDependencyAttribute", 1, __parameter_types__, __parameters__);
					};
				
					DefaultDependencyAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Attribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					DefaultDependencyAttribute(MonoObject *nativeObject)
					: mscorlib::System::Attribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~DefaultDependencyAttribute()
					{
					};
				

					DefaultDependencyAttribute & operator=(DefaultDependencyAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DefaultDependencyAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_LoadHint)) mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__  LoadHint;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get:LoadHint
					mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__  get_LoadHint() const;

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
