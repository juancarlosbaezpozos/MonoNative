#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_VARDESC.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ELEMDESC.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//	Get/Set:memid
				mscorlib::System::Int32 VARDESC::get_memid() const
				{
					return Global::GetFieldInt32Value(__native_object__, "memid");
				}

				void VARDESC::set_memid(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:lpstrSchema
				mscorlib::System::String VARDESC::get_lpstrSchema() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "lpstrSchema"));
				}

				void VARDESC::set_lpstrSchema(mscorlib::System::String  value)
				{
				}

				//	Get/Set:elemdescVar
				mscorlib::System::Runtime::InteropServices::ELEMDESC VARDESC::get_elemdescVar() const
				{
					return Global::GetFieldValue(__native_object__, "elemdescVar");
				}

				void VARDESC::set_elemdescVar(mscorlib::System::Runtime::InteropServices::ELEMDESC  value)
				{
				}

				//	Get/Set:wVarFlags
				mscorlib::System::Int16 VARDESC::get_wVarFlags() const
				{
					return Global::GetFieldInt16Value(__native_object__, "wVarFlags");
				}

				void VARDESC::set_wVarFlags(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:varkind
				mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__ VARDESC::get_varkind() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "varkind"));
				}

				void VARDESC::set_varkind(mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  value)
				{
				}

				//DESCUNION Nested Type Implementation
				//Public Methods
				//	Get/Set:lpvarValue
				mscorlib::System::IntPtr VARDESC::DESCUNION::get_lpvarValue() const
				{
					return Global::GetFieldIntPtrValue(__native_object__, "lpvarValue");
				}

				void VARDESC::DESCUNION::set_lpvarValue(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:oInst
				mscorlib::System::Int32 VARDESC::DESCUNION::get_oInst() const
				{
					return Global::GetFieldInt32Value(__native_object__, "oInst");
				}

				void VARDESC::DESCUNION::set_oInst(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
