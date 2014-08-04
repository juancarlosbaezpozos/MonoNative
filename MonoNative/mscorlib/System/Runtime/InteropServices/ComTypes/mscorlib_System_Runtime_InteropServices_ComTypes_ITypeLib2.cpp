#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



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
					void ITypeLib2::FindName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal, std::vector<mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo*> ppTInfo, std::vector<mscorlib::System::Int32*> rgMemId, mscorlib::System::Int16 pcFound)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(szNameBuf).name());
							__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
							__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(ppTInfo).name()))->eklass);
							__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgMemId).name()))->eklass);
							__parameter_types__[4] = Global::GetType(typeid(pcFound).name());
							__parameters__[0] = (MonoObject*)szNameBuf;
							__parameters__[1] = &lHashVal;
							__parameters__[2] = Global::FromArray<mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo*>(ppTInfo, typeid(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo).name());
							__parameters__[3] = Global::FromArray<mscorlib::System::Int32*>(rgMemId, typeid(mscorlib::System::Int32).name());
							__parameters__[4] = &pcFound;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "FindName", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetCustData(mscorlib::System::Guid guid, mscorlib::System::Object pVarVal)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(guid).name());
							__parameter_types__[1] = Global::GetType(typeid(pVarVal).name());
							__parameters__[0] = (MonoObject*)guid;
							__parameters__[1] = (MonoObject*)pVarVal;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetDocumentation(mscorlib::System::Int32 index, mscorlib::System::String strName, mscorlib::System::String strDocString, mscorlib::System::Int32 dwHelpContext, mscorlib::System::String strHelpFile)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(strName).name());
							__parameter_types__[2] = Global::GetType(typeid(strDocString).name());
							__parameter_types__[3] = Global::GetType(typeid(dwHelpContext).name());
							__parameter_types__[4] = Global::GetType(typeid(strHelpFile).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)strName;
							__parameters__[2] = (MonoObject*)strDocString;
							__parameters__[3] = &dwHelpContext;
							__parameters__[4] = (MonoObject*)strHelpFile;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetDocumentation", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 5, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetLibAttr(mscorlib::System::IntPtr ppTLibAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTLibAttr).name());
							__parameters__[0] = (MonoObject*)ppTLibAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetLibAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetLibStatistics(mscorlib::System::IntPtr pcUniqueNames, mscorlib::System::Int32 pcchUniqueNames)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pcUniqueNames).name());
							__parameter_types__[1] = Global::GetType(typeid(pcchUniqueNames).name());
							__parameters__[0] = (MonoObject*)pcUniqueNames;
							__parameters__[1] = &pcchUniqueNames;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetLibStatistics", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetDocumentation2(mscorlib::System::Int32 index, mscorlib::System::String pbstrHelpString, mscorlib::System::Int32 pdwHelpStringContext, mscorlib::System::String pbstrHelpStringDll)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pbstrHelpString).name());
							__parameter_types__[2] = Global::GetType(typeid(pdwHelpStringContext).name());
							__parameter_types__[3] = Global::GetType(typeid(pbstrHelpStringDll).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)pbstrHelpString;
							__parameters__[2] = &pdwHelpStringContext;
							__parameters__[3] = (MonoObject*)pbstrHelpStringDll;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetDocumentation2", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 4, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetAllCustData(mscorlib::System::IntPtr pCustData)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pCustData).name());
							__parameters__[0] = (MonoObject*)pCustData;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetAllCustData", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetTypeComp(mscorlib::System::Runtime::InteropServices::ComTypes::ITypeComp ppTComp)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppTComp).name());
							__parameters__[0] = (MonoObject*)ppTComp;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetTypeComp", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetTypeInfo(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTI)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(ppTI).name());
							__parameters__[0] = &index;
							__parameters__[1] = (MonoObject*)ppTI;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetTypeInfoOfGuid(mscorlib::System::Guid guid, mscorlib::System::Runtime::InteropServices::ComTypes::ITypeInfo ppTInfo)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(guid).name());
							__parameter_types__[1] = Global::GetType(typeid(ppTInfo).name());
							__parameters__[0] = (MonoObject*)guid;
							__parameters__[1] = (MonoObject*)ppTInfo;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetTypeInfoOfGuid", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITypeLib2::GetTypeInfoType(mscorlib::System::Int32 index, mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ pTKind)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameter_types__[1] = Global::GetType(typeid(pTKind).name());
							__parameters__[0] = &index;
							__parameters__[1] = reinterpret_cast<void*>(pTKind);
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetTypeInfoType", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean ITypeLib2::IsName(mscorlib::System::String szNameBuf, mscorlib::System::Int32 lHashVal)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(szNameBuf).name());
							__parameter_types__[1] = Global::GetType(typeid(lHashVal).name());
							__parameters__[0] = (MonoObject*)szNameBuf;
							__parameters__[1] = &lHashVal;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "IsName", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void ITypeLib2::ReleaseTLibAttr(mscorlib::System::IntPtr pTLibAttr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pTLibAttr).name());
							__parameters__[0] = (MonoObject*)pTLibAttr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "ReleaseTLibAttr", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Int32 ITypeLib2::GetTypeInfoCount()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "ITypeLib2", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices_ComTypes_ITypeLib2, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
