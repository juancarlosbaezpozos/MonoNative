#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_CLSCOMPLIANTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_CLSCOMPLIANTATTRIBUTE_H

#include <mscorlib/System/mscorlib_System_Attribute.h>
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

		class CLSCompliantAttribute
			: public mscorlib::System::Attribute
			, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
		{
		public:
			CLSCompliantAttribute(mscorlib::System::Boolean isCompliant)
			: mscorlib::System::Attribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.CLSCompliantAttribute"))
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
				__parameters__[0] = reinterpret_cast<void*>(isCompliant);
				__native_object__ = Global::New("mscorlib", "System", "CLSCompliantAttribute", 1, __parameter_types__, __parameters__);
			};
		
			CLSCompliantAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Attribute(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
			{
			};
		
			CLSCompliantAttribute(MonoObject *nativeObject)
			: mscorlib::System::Attribute(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
			{
			};
		
			~CLSCompliantAttribute()
			{
			};
		

			CLSCompliantAttribute & operator=(CLSCompliantAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(CLSCompliantAttribute &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_IsCompliant)) mscorlib::System::Boolean  IsCompliant;
			__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

			//Get Set Properties Methods
			//	Get:IsCompliant
			mscorlib::System::Boolean  get_IsCompliant() const;

			//	Get:TypeId
			mscorlib::System::Object  get_TypeId() const;

		
		protected:
		
		private:
		
		};

	}
}
#endif
