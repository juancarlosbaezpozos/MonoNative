#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_BIND_OPTS.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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

					//Public Methods
					//	Get/Set:cbStruct
					mscorlib::System::Int32 BIND_OPTS::get_cbStruct()
					{
						return Global::GetFieldInt32Value(__native_object__, "cbStruct");
					}

					void BIND_OPTS::set_cbStruct(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:grfFlags
					mscorlib::System::Int32 BIND_OPTS::get_grfFlags()
					{
						return Global::GetFieldInt32Value(__native_object__, "grfFlags");
					}

					void BIND_OPTS::set_grfFlags(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:grfMode
					mscorlib::System::Int32 BIND_OPTS::get_grfMode()
					{
						return Global::GetFieldInt32Value(__native_object__, "grfMode");
					}

					void BIND_OPTS::set_grfMode(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:dwTickCountDeadline
					mscorlib::System::Int32 BIND_OPTS::get_dwTickCountDeadline()
					{
						return Global::GetFieldInt32Value(__native_object__, "dwTickCountDeadline");
					}

					void BIND_OPTS::set_dwTickCountDeadline(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
