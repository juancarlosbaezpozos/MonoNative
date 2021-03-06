#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FUNCDESC_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FUNCDESC_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_FUNCKIND.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_INVOKEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CALLCONV.h>

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

				class ELEMDESC;
				

			}
		}
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

				class FUNCDESC
					: public mscorlib::System::ValueType
				{
				public:
					FUNCDESC(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					FUNCDESC(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~FUNCDESC()
					{
					};
				

					FUNCDESC & operator=(FUNCDESC &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(FUNCDESC &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Fields
					__declspec(property(get=get_memid, put=set_memid)) mscorlib::System::Int32  memid;
					__declspec(property(get=get_lprgscode, put=set_lprgscode)) mscorlib::System::IntPtr  lprgscode;
					__declspec(property(get=get_lprgelemdescParam, put=set_lprgelemdescParam)) mscorlib::System::IntPtr  lprgelemdescParam;
					__declspec(property(get=get_funckind, put=set_funckind)) mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__  funckind;
					__declspec(property(get=get_invkind, put=set_invkind)) mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__  invkind;
					__declspec(property(get=get_callconv, put=set_callconv)) mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__  callconv;
					__declspec(property(get=get_cParams, put=set_cParams)) mscorlib::System::Int16  cParams;
					__declspec(property(get=get_cParamsOpt, put=set_cParamsOpt)) mscorlib::System::Int16  cParamsOpt;
					__declspec(property(get=get_oVft, put=set_oVft)) mscorlib::System::Int16  oVft;
					__declspec(property(get=get_cScodes, put=set_cScodes)) mscorlib::System::Int16  cScodes;
					__declspec(property(get=get_elemdescFunc, put=set_elemdescFunc)) mscorlib::System::Runtime::InteropServices::ELEMDESC  elemdescFunc;
					__declspec(property(get=get_wFuncFlags, put=set_wFuncFlags)) mscorlib::System::Int16  wFuncFlags;

					//	Get/Set:memid
					mscorlib::System::Int32  get_memid() const;
					void set_memid(mscorlib::System::Int32  value);

					//	Get/Set:lprgscode
					mscorlib::System::IntPtr  get_lprgscode() const;
					void set_lprgscode(mscorlib::System::IntPtr  value);

					//	Get/Set:lprgelemdescParam
					mscorlib::System::IntPtr  get_lprgelemdescParam() const;
					void set_lprgelemdescParam(mscorlib::System::IntPtr  value);

					//	Get/Set:funckind
					mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__  get_funckind() const;
					void set_funckind(mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__  value);

					//	Get/Set:invkind
					mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__  get_invkind() const;
					void set_invkind(mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__  value);

					//	Get/Set:callconv
					mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__  get_callconv() const;
					void set_callconv(mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__  value);

					//	Get/Set:cParams
					mscorlib::System::Int16  get_cParams() const;
					void set_cParams(mscorlib::System::Int16  value);

					//	Get/Set:cParamsOpt
					mscorlib::System::Int16  get_cParamsOpt() const;
					void set_cParamsOpt(mscorlib::System::Int16  value);

					//	Get/Set:oVft
					mscorlib::System::Int16  get_oVft() const;
					void set_oVft(mscorlib::System::Int16  value);

					//	Get/Set:cScodes
					mscorlib::System::Int16  get_cScodes() const;
					void set_cScodes(mscorlib::System::Int16  value);

					//	Get/Set:elemdescFunc
					mscorlib::System::Runtime::InteropServices::ELEMDESC  get_elemdescFunc() const;
					void set_elemdescFunc(mscorlib::System::Runtime::InteropServices::ELEMDESC  value);

					//	Get/Set:wFuncFlags
					mscorlib::System::Int16  get_wFuncFlags() const;
					void set_wFuncFlags(mscorlib::System::Int16  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
