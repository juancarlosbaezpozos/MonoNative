#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean _MethodInfo::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__MethodInfo, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _MethodInfo::GetBaseDefinition()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetBaseDefinition", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Object*> _MethodInfo::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__MethodInfo, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Object*> _MethodInfo::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__MethodInfo, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Int32 _MethodInfo::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::MethodImplAttributes::__ENUM__ _MethodInfo::GetMethodImplementationFlags()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetMethodImplementationFlags", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Reflection::MethodImplAttributes::__ENUM__*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Reflection::ParameterInfo*> _MethodInfo::GetParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetParameters", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::ParameterInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::ParameterInfo (__array_item__));
						}
						return __array_result__;
				}

				void _MethodInfo::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = (MonoObject*)rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = (MonoObject*)rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__MethodInfo, 5, __parameter_types__, __parameters__, NULL);
				}

				void _MethodInfo::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__MethodInfo, 3, __parameter_types__, __parameters__, NULL);
				}

				void _MethodInfo::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__MethodInfo, 1, __parameter_types__, __parameters__, NULL);
				}

				void _MethodInfo::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(dispIdMember).name());
						__parameter_types__[1] = Global::GetType(typeid(riid).name());
						__parameter_types__[2] = Global::GetType(typeid(lcid).name());
						__parameter_types__[3] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(pDispParams).name());
						__parameter_types__[5] = Global::GetType(typeid(pVarResult).name());
						__parameter_types__[6] = Global::GetType(typeid(pExcepInfo).name());
						__parameter_types__[7] = Global::GetType(typeid(puArgErr).name());
						__parameters__[0] = &dispIdMember;
						__parameters__[1] = (MonoObject*)riid;
						__parameters__[2] = &lcid;
						__parameters__[3] = &wFlags;
						__parameters__[4] = (MonoObject*)pDispParams;
						__parameters__[5] = (MonoObject*)pVarResult;
						__parameters__[6] = (MonoObject*)pExcepInfo;
						__parameters__[7] = (MonoObject*)puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__MethodInfo, 8, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type _MethodInfo::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Object _MethodInfo::Invoke(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> parameters)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameters).name()))->eklass);
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(parameters, typeid(mscorlib::System::Object).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__MethodInfo, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _MethodInfo::Invoke(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> parameters, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameters).name()))->eklass);
						__parameter_types__[4] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(parameters, typeid(mscorlib::System::Object).name());
						__parameters__[4] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__MethodInfo, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean _MethodInfo::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__MethodInfo, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String _MethodInfo::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::MethodAttributes::__ENUM__  _MethodInfo::get_Attributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_Attributes", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MethodAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:CallingConvention
				mscorlib::System::Reflection::CallingConventions::__ENUM__  _MethodInfo::get_CallingConvention()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_CallingConvention", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::CallingConventions::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  _MethodInfo::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_DeclaringType", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  _MethodInfo::get_IsAbstract()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsAbstract", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  _MethodInfo::get_IsAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsAssembly", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsConstructor
				mscorlib::System::Boolean  _MethodInfo::get_IsConstructor()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsConstructor", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  _MethodInfo::get_IsFamily()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsFamily", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  _MethodInfo::get_IsFamilyAndAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsFamilyAndAssembly", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  _MethodInfo::get_IsFamilyOrAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsFamilyOrAssembly", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFinal
				mscorlib::System::Boolean  _MethodInfo::get_IsFinal()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsFinal", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsHideBySig
				mscorlib::System::Boolean  _MethodInfo::get_IsHideBySig()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsHideBySig", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  _MethodInfo::get_IsPrivate()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsPrivate", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  _MethodInfo::get_IsPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsPublic", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  _MethodInfo::get_IsSpecialName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsSpecialName", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  _MethodInfo::get_IsStatic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsStatic", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsVirtual
				mscorlib::System::Boolean  _MethodInfo::get_IsVirtual()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_IsVirtual", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  _MethodInfo::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_MemberType", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:MethodHandle
				mscorlib::System::RuntimeMethodHandle  _MethodInfo::get_MethodHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_MethodHandle", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeMethodHandle(__result__);
				}


				//	Get:Name
				mscorlib::System::String  _MethodInfo::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_Name", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  _MethodInfo::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_ReflectedType", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReturnType
				mscorlib::System::Type  _MethodInfo::get_ReturnType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_ReturnType", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReturnTypeCustomAttributes
				mscorlib::System::Reflection::ICustomAttributeProvider  _MethodInfo::get_ReturnTypeCustomAttributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_MethodInfo", 0, NULL, "get_ReturnTypeCustomAttributes", __mscorlib_System_Runtime_InteropServices__MethodInfo, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ICustomAttributeProvider(__result__);
				}



			}
		}
	}
}
