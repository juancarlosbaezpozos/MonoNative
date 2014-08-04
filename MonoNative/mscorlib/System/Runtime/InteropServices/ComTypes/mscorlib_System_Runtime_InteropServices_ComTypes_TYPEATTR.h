#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPEATTR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_TYPEATTR_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEKIND.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEFLAGS.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class Guid;
		class IntPtr;
		

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

					class TYPEDESC;
					class IDLDESC;
					

				}
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
				namespace ComTypes
				{

					class TYPEATTR
						: public mscorlib::System::ValueType
					{
					public:
						TYPEATTR(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::ValueType(nativeTypeInfo)
						{
						};
					
						TYPEATTR(MonoObject *nativeObject)
						: mscorlib::System::ValueType(nativeObject)
						{
						};
					
						~TYPEATTR()
						{
						};
					

						TYPEATTR & operator=(TYPEATTR &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Fields
						__declspec(property(get=get_guid, put=set_guid)) mscorlib::System::Guid  guid;
						__declspec(property(get=get_lcid, put=set_lcid)) mscorlib::System::Int32  lcid;
						__declspec(property(get=get_dwReserved, put=set_dwReserved)) mscorlib::System::Int32  dwReserved;
						__declspec(property(get=get_memidConstructor, put=set_memidConstructor)) mscorlib::System::Int32  memidConstructor;
						__declspec(property(get=get_memidDestructor, put=set_memidDestructor)) mscorlib::System::Int32  memidDestructor;
						__declspec(property(get=get_lpstrSchema, put=set_lpstrSchema)) mscorlib::System::IntPtr  lpstrSchema;
						__declspec(property(get=get_cbSizeInstance, put=set_cbSizeInstance)) mscorlib::System::Int32  cbSizeInstance;
						__declspec(property(get=get_typekind, put=set_typekind)) mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__  typekind;
						__declspec(property(get=get_cFuncs, put=set_cFuncs)) mscorlib::System::Int16  cFuncs;
						__declspec(property(get=get_cVars, put=set_cVars)) mscorlib::System::Int16  cVars;
						__declspec(property(get=get_cImplTypes, put=set_cImplTypes)) mscorlib::System::Int16  cImplTypes;
						__declspec(property(get=get_cbSizeVft, put=set_cbSizeVft)) mscorlib::System::Int16  cbSizeVft;
						__declspec(property(get=get_cbAlignment, put=set_cbAlignment)) mscorlib::System::Int16  cbAlignment;
						__declspec(property(get=get_wTypeFlags, put=set_wTypeFlags)) mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__  wTypeFlags;
						__declspec(property(get=get_wMajorVerNum, put=set_wMajorVerNum)) mscorlib::System::Int16  wMajorVerNum;
						__declspec(property(get=get_wMinorVerNum, put=set_wMinorVerNum)) mscorlib::System::Int16  wMinorVerNum;
						__declspec(property(get=get_tdescAlias, put=set_tdescAlias)) mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC  tdescAlias;
						__declspec(property(get=get_idldescType, put=set_idldescType)) mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC  idldescType;

						//Public Static Fields
						static Property<mscorlib::System::Int32> MEMBER_ID_NIL;

						//	Get/Set:guid
						mscorlib::System::Guid  get_guid();
						void set_guid(mscorlib::System::Guid  value);

						//	Get/Set:lcid
						mscorlib::System::Int32  get_lcid();
						void set_lcid(mscorlib::System::Int32  value);

						//	Get/Set:dwReserved
						mscorlib::System::Int32  get_dwReserved();
						void set_dwReserved(mscorlib::System::Int32  value);

						//	Get/Set:memidConstructor
						mscorlib::System::Int32  get_memidConstructor();
						void set_memidConstructor(mscorlib::System::Int32  value);

						//	Get/Set:memidDestructor
						mscorlib::System::Int32  get_memidDestructor();
						void set_memidDestructor(mscorlib::System::Int32  value);

						//	Get/Set:lpstrSchema
						mscorlib::System::IntPtr  get_lpstrSchema();
						void set_lpstrSchema(mscorlib::System::IntPtr  value);

						//	Get/Set:cbSizeInstance
						mscorlib::System::Int32  get_cbSizeInstance();
						void set_cbSizeInstance(mscorlib::System::Int32  value);

						//	Get/Set:typekind
						mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__  get_typekind();
						void set_typekind(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__  value);

						//	Get/Set:cFuncs
						mscorlib::System::Int16  get_cFuncs();
						void set_cFuncs(mscorlib::System::Int16  value);

						//	Get/Set:cVars
						mscorlib::System::Int16  get_cVars();
						void set_cVars(mscorlib::System::Int16  value);

						//	Get/Set:cImplTypes
						mscorlib::System::Int16  get_cImplTypes();
						void set_cImplTypes(mscorlib::System::Int16  value);

						//	Get/Set:cbSizeVft
						mscorlib::System::Int16  get_cbSizeVft();
						void set_cbSizeVft(mscorlib::System::Int16  value);

						//	Get/Set:cbAlignment
						mscorlib::System::Int16  get_cbAlignment();
						void set_cbAlignment(mscorlib::System::Int16  value);

						//	Get/Set:wTypeFlags
						mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__  get_wTypeFlags();
						void set_wTypeFlags(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__  value);

						//	Get/Set:wMajorVerNum
						mscorlib::System::Int16  get_wMajorVerNum();
						void set_wMajorVerNum(mscorlib::System::Int16  value);

						//	Get/Set:wMinorVerNum
						mscorlib::System::Int16  get_wMinorVerNum();
						void set_wMinorVerNum(mscorlib::System::Int16  value);

						//	Get/Set:tdescAlias
						mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC  get_tdescAlias();
						void set_tdescAlias(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC  value);

						//	Get/Set:idldescType
						mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC  get_idldescType();
						void set_idldescType(mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC  value);

						//	Get/Set:MEMBER_ID_NIL
						static mscorlib::System::Int32  get_MEMBER_ID_NIL();
						static void set_MEMBER_ID_NIL(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
