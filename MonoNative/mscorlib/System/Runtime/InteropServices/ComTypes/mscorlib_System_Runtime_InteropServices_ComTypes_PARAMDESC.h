#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_PARAMDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_PARAMDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_PARAMFLAG.h>

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
			namespace InteropServices
			{
				namespace ComTypes
				{

					class PARAMDESC
						: public mscorlib::System::ValueType
					{
					public:
						PARAMDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						PARAMDESC(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~PARAMDESC()
						{
						};
					

						PARAMDESC & operator=(PARAMDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(PARAMDESC &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_lpVarValue, put=set_lpVarValue)) mscorlib::System::IntPtr  lpVarValue;
						__declspec(property(get=get_wParamFlags, put=set_wParamFlags)) mscorlib::System::Runtime::InteropServices::ComTypes::PARAMFLAG::__ENUM__  wParamFlags;

						//	Get/Set:lpVarValue
						mscorlib::System::IntPtr  get_lpVarValue() const;
						void set_lpVarValue(mscorlib::System::IntPtr  value);

						//	Get/Set:wParamFlags
						mscorlib::System::Runtime::InteropServices::ComTypes::PARAMFLAG::__ENUM__  get_wParamFlags() const;
						void set_wParamFlags(mscorlib::System::Runtime::InteropServices::ComTypes::PARAMFLAG::__ENUM__  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
