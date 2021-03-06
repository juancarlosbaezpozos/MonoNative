#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_StructLayoutAttribute.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::Reflection::Binder , mscorlib::System::Type> mscorlib::System::Type::DefaultBinder(&mscorlib::System::Type::get_DefaultBinder, &mscorlib::System::Type::set_DefaultBinder);
		//Public Methods
		mscorlib::System::Boolean Type::Equals(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Type::Equals(mscorlib::System::Type o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Type Type::GetEnumUnderlyingType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEnumUnderlyingType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		std::vector<mscorlib::System::String*> Type::GetEnumNames()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEnumNames", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::String (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Array Type::GetEnumValues()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEnumValues", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Array(__result__);
		}

		mscorlib::System::String Type::GetEnumName(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEnumName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::Boolean Type::IsEnumDefined(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "IsEnumDefined", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , mscorlib::System::String , mscorlib::System::Boolean )> typeResolver)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , const char *, mscorlib::System::Boolean )> typeResolver)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , mscorlib::System::String , mscorlib::System::Boolean )> typeResolver, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameter_types__[3] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				__parameters__[3] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , const char *, mscorlib::System::Boolean )> typeResolver, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameter_types__[3] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				__parameters__[3] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , mscorlib::System::String , mscorlib::System::Boolean )> typeResolver, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameter_types__[3] = Global::GetType(typeid(throwOnError).name());
				__parameter_types__[4] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				__parameters__[3] = reinterpret_cast<void*>(throwOnError);
				__parameters__[4] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName, mscorlib::Callback<mscorlib::System::Reflection::Assembly  (mscorlib::System::Reflection::AssemblyName )> assemblyResolver, mscorlib::Callback<mscorlib::System::Type  (mscorlib::System::Reflection::Assembly , const char *, mscorlib::System::Boolean )> typeResolver, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblyResolver).name());
				__parameter_types__[2] = Global::GetType(typeid(typeResolver).name());
				__parameter_types__[3] = Global::GetType(typeid(throwOnError).name());
				__parameter_types__[4] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = &assemblyResolver;
				__parameters__[2] = &typeResolver;
				__parameters__[3] = reinterpret_cast<void*>(throwOnError);
				__parameters__[4] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(mscorlib::System::String typeName, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetType(const char *typeName, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::GetTypeArray(std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeArray", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::TypeCode::__ENUM__ Type::GetTypeCode(mscorlib::System::Type type)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameters__[0] = (MonoObject*)type;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeCode", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return static_cast<mscorlib::System::TypeCode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameters__[0] = (MonoObject*)clsid;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)clsid;
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid, mscorlib::System::String server)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameter_types__[1] = Global::GetType(typeid(server).name());
				__parameters__[0] = (MonoObject*)clsid;
				__parameters__[1] = (MonoObject*)server;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid, const char *server)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)clsid;
				__parameters__[1] = mono_string_new(Global::GetDomain(), server);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid, mscorlib::System::String server, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameter_types__[1] = Global::GetType(typeid(server).name());
				__parameter_types__[2] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)clsid;
				__parameters__[1] = (MonoObject*)server;
				__parameters__[2] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromCLSID(mscorlib::System::Guid clsid, const char *server, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(clsid).name());
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)clsid;
				__parameters__[1] = mono_string_new(Global::GetDomain(), server);
				__parameters__[2] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromCLSID", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromHandle(mscorlib::System::RuntimeTypeHandle handle)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(handle).name());
				__parameters__[0] = (MonoObject*)handle;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(mscorlib::System::String progID)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(progID).name());
				__parameters__[0] = (MonoObject*)progID;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(const char *progID)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), progID);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(mscorlib::System::String progID, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(progID).name());
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)progID;
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(const char *progID, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), progID);
				__parameters__[1] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(mscorlib::System::String progID, mscorlib::System::String server)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(progID).name());
				__parameter_types__[1] = Global::GetType(typeid(server).name());
				__parameters__[0] = (MonoObject*)progID;
				__parameters__[1] = (MonoObject*)server;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(const char *progID, const char *server)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), progID);
				__parameters__[1] = mono_string_new(Global::GetDomain(), server);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(mscorlib::System::String progID, mscorlib::System::String server, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(progID).name());
				__parameter_types__[1] = Global::GetType(typeid(server).name());
				__parameter_types__[2] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = (MonoObject*)progID;
				__parameters__[1] = (MonoObject*)server;
				__parameters__[2] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetTypeFromProgID(const char *progID, const char *server, mscorlib::System::Boolean throwOnError)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(throwOnError).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), progID);
				__parameters__[1] = mono_string_new(Global::GetDomain(), server);
				__parameters__[2] = reinterpret_cast<void*>(throwOnError);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeFromProgID", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::RuntimeTypeHandle Type::GetTypeHandle(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetTypeHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::Type Type::GetType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Boolean Type::IsSubclassOf(mscorlib::System::Type c)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(c).name());
				__parameters__[0] = (MonoObject*)c;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "IsSubclassOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::FindInterfaces(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(filter).name());
				__parameter_types__[1] = Global::GetType(typeid(filterCriteria).name());
				__parameters__[0] = &filter;
				__parameters__[1] = (MonoObject*)filterCriteria;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "FindInterfaces", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Type Type::GetInterface(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterface", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetInterface(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterface", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterface", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetInterface(const char *name, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterface", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Reflection::InterfaceMapping Type::GetInterfaceMap(mscorlib::System::Type interfaceType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
				__parameters__[0] = (MonoObject*)interfaceType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterfaceMap", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::InterfaceMapping(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::GetInterfaces()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetInterfaces", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Boolean Type::IsAssignableFrom(mscorlib::System::Type c)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(c).name());
				__parameters__[0] = (MonoObject*)c;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "IsAssignableFrom", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Type::IsInstanceOfType(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "IsInstanceOfType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Type::GetArrayRank()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetArrayRank", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Type Type::GetElementType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetElementType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Reflection::EventInfo Type::GetEvent(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::EventInfo(__result__);
		}

		mscorlib::System::Reflection::EventInfo Type::GetEvent(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::EventInfo(__result__);
		}

		mscorlib::System::Reflection::EventInfo Type::GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvent", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::EventInfo(__result__);
		}

		mscorlib::System::Reflection::EventInfo Type::GetEvent(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvent", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::EventInfo(__result__);
		}

		std::vector<mscorlib::System::Reflection::EventInfo*> Type::GetEvents()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvents", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::EventInfo*> Type::GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetEvents", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Reflection::FieldInfo Type::GetField(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetField", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::FieldInfo(__result__);
		}

		mscorlib::System::Reflection::FieldInfo Type::GetField(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetField", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::FieldInfo(__result__);
		}

		mscorlib::System::Reflection::FieldInfo Type::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::FieldInfo(__result__);
		}

		mscorlib::System::Reflection::FieldInfo Type::GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::FieldInfo(__result__);
		}

		std::vector<mscorlib::System::Reflection::FieldInfo*> Type::GetFields()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetFields", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::FieldInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::FieldInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::FieldInfo*> Type::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::FieldInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::FieldInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Int32 Type::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(type).name());
				__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_type__ = type;
				__parameters__[1] = &__param_type__;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[2] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMember(const char *name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(type).name());
				__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_type__ = type;
				__parameters__[1] = &__param_type__;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[2] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMembers()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMembers", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMembers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(callConvention).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				mscorlib::System::Int32 __param_callConvention__ = callConvention;
				__parameters__[3] = &__param_callConvention__;
				__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		mscorlib::System::Reflection::MethodInfo Type::GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(callConvention).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				mscorlib::System::Int32 __param_callConvention__ = callConvention;
				__parameters__[3] = &__param_callConvention__;
				__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethod", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::MethodInfo(__result__);
		}

		std::vector<mscorlib::System::Reflection::MethodInfo*> Type::GetMethods()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethods", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MethodInfo*> Type::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Type Type::GetNestedType(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetNestedType(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::GetNestedType(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::GetNestedTypes()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedTypes", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Type*> Type::GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetNestedTypes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::PropertyInfo*> Type::GetProperties()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperties", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::PropertyInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::PropertyInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::PropertyInfo*> Type::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperties", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::PropertyInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::PropertyInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)returnType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, mscorlib::System::Type returnType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = (MonoObject*)returnType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)returnType;
				__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = (MonoObject*)returnType;
				__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)returnType;
				__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(returnType).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = (MonoObject*)returnType;
				__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(returnType).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)returnType;
				__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::PropertyInfo Type::GetProperty(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(returnType).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)returnType;
				__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetProperty", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::PropertyInfo(__result__);
		}

		mscorlib::System::Reflection::ConstructorInfo Type::GetConstructor(std::vector<mscorlib::System::Type*> types)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetConstructor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::ConstructorInfo(__result__);
		}

		mscorlib::System::Reflection::ConstructorInfo Type::GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[1] = Global::GetType(typeid(binder).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				__parameters__[1] = (MonoObject*)binder;
				__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetConstructor", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::ConstructorInfo(__result__);
		}

		mscorlib::System::Reflection::ConstructorInfo Type::GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[1] = Global::GetType(typeid(binder).name());
				__parameter_types__[2] = Global::GetType(typeid(callConvention).name());
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				__parameters__[1] = (MonoObject*)binder;
				mscorlib::System::Int32 __param_callConvention__ = callConvention;
				__parameters__[2] = &__param_callConvention__;
				__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
				__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetConstructor", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::ConstructorInfo(__result__);
		}

		std::vector<mscorlib::System::Reflection::ConstructorInfo*> Type::GetConstructors()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetConstructors", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::ConstructorInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::ConstructorInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::ConstructorInfo*> Type::GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[0] = &__param_bindingAttr__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetConstructors", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::ConstructorInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::ConstructorInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::GetDefaultMembers()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetDefaultMembers", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Reflection::MemberInfo*> Type::FindMembers(mscorlib::System::Reflection::MemberTypes::__ENUM__ memberType, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(memberType).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(filter).name());
				__parameter_types__[3] = Global::GetType(typeid(filterCriteria).name());
				mscorlib::System::Int32 __param_memberType__ = memberType;
				__parameters__[0] = &__param_memberType__;
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[1] = &__param_bindingAttr__;
				__parameters__[2] = &filter;
				__parameters__[3] = (MonoObject*)filterCriteria;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "FindMembers", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Object Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Type::InvokeMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[5] = Global::GetType(typeid(culture).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[5] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Type::InvokeMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[5] = Global::GetType(typeid(culture).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[5] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::String*>(namedParameters, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Type::InvokeMember(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = Global::GetType(typeid(target).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
				__parameters__[1] = &__param_invokeAttr__;
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = (MonoObject*)target;
				__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::String*>(namedParameters, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "InvokeMember", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::String Type::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::GetGenericArguments()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetGenericArguments", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Type Type::GetGenericTypeDefinition()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::MakeGenericType(std::vector<mscorlib::System::Type*> typeArguments)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(typeArguments, typeid(mscorlib::System::Type).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "MakeGenericType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		std::vector<mscorlib::System::Type*> Type::GetGenericParameterConstraints()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "GetGenericParameterConstraints", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Type (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Type Type::MakeArrayType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "MakeArrayType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::MakeArrayType(mscorlib::System::Int32 rank)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(rank).name());
				__parameters__[0] = &rank;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "MakeArrayType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::MakeByRefType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "MakeByRefType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::MakePointerType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "MakePointerType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::ReflectionOnlyGetType(mscorlib::System::String typeName, mscorlib::System::Boolean throwIfNotFound, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(typeName).name());
				__parameter_types__[1] = Global::GetType(typeid(throwIfNotFound).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = (MonoObject*)typeName;
				__parameters__[1] = reinterpret_cast<void*>(throwIfNotFound);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "ReflectionOnlyGetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Type Type::ReflectionOnlyGetType(const char *typeName, mscorlib::System::Boolean throwIfNotFound, mscorlib::System::Boolean ignoreCase)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(throwIfNotFound).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[1] = reinterpret_cast<void*>(throwIfNotFound);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "ReflectionOnlyGetType", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Boolean Type::IsEquivalentTo(mscorlib::System::Type other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "IsEquivalentTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:Assembly
		mscorlib::System::Reflection::Assembly  Type::get_Assembly() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Assembly(__result__);
		}


		//	Get:AssemblyQualifiedName
		mscorlib::System::String  Type::get_AssemblyQualifiedName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_AssemblyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Attributes
		mscorlib::System::Reflection::TypeAttributes::__ENUM__  Type::get_Attributes() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::Reflection::TypeAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}


		//	Get:BaseType
		mscorlib::System::Type  Type::get_BaseType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_BaseType", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Type(__result__);
		}


		//	Get:DeclaringType
		mscorlib::System::Type  Type::get_DeclaringType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Type(__result__);
		}


		//	Get:FullName
		mscorlib::System::String  Type::get_FullName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:GUID
		mscorlib::System::Guid  Type::get_GUID() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GUID", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Guid(__result__);
		}


		//	Get:HasElementType
		mscorlib::System::Boolean  Type::get_HasElementType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_HasElementType", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsAbstract
		mscorlib::System::Boolean  Type::get_IsAbstract() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAbstract", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsAnsiClass
		mscorlib::System::Boolean  Type::get_IsAnsiClass() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAnsiClass", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsArray
		mscorlib::System::Boolean  Type::get_IsArray() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsArray", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsAutoClass
		mscorlib::System::Boolean  Type::get_IsAutoClass() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoClass", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsAutoLayout
		mscorlib::System::Boolean  Type::get_IsAutoLayout() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsAutoLayout", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsByRef
		mscorlib::System::Boolean  Type::get_IsByRef() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsByRef", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsClass
		mscorlib::System::Boolean  Type::get_IsClass() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsClass", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsCOMObject
		mscorlib::System::Boolean  Type::get_IsCOMObject() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsCOMObject", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsConstructedGenericType
		mscorlib::System::Boolean  Type::get_IsConstructedGenericType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsConstructedGenericType", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsContextful
		mscorlib::System::Boolean  Type::get_IsContextful() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsContextful", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsEnum
		mscorlib::System::Boolean  Type::get_IsEnum() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsEnum", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsExplicitLayout
		mscorlib::System::Boolean  Type::get_IsExplicitLayout() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsExplicitLayout", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsImport
		mscorlib::System::Boolean  Type::get_IsImport() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsImport", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsInterface
		mscorlib::System::Boolean  Type::get_IsInterface() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsInterface", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsLayoutSequential
		mscorlib::System::Boolean  Type::get_IsLayoutSequential() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsLayoutSequential", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsMarshalByRef
		mscorlib::System::Boolean  Type::get_IsMarshalByRef() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsMarshalByRef", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedAssembly
		mscorlib::System::Boolean  Type::get_IsNestedAssembly() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedAssembly", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedFamANDAssem
		mscorlib::System::Boolean  Type::get_IsNestedFamANDAssem() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamANDAssem", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedFamily
		mscorlib::System::Boolean  Type::get_IsNestedFamily() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamily", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedFamORAssem
		mscorlib::System::Boolean  Type::get_IsNestedFamORAssem() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedFamORAssem", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedPrivate
		mscorlib::System::Boolean  Type::get_IsNestedPrivate() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPrivate", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNestedPublic
		mscorlib::System::Boolean  Type::get_IsNestedPublic() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNestedPublic", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNotPublic
		mscorlib::System::Boolean  Type::get_IsNotPublic() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNotPublic", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsPointer
		mscorlib::System::Boolean  Type::get_IsPointer() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPointer", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsPrimitive
		mscorlib::System::Boolean  Type::get_IsPrimitive() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPrimitive", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsPublic
		mscorlib::System::Boolean  Type::get_IsPublic() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsSealed
		mscorlib::System::Boolean  Type::get_IsSealed() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSealed", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsSerializable
		mscorlib::System::Boolean  Type::get_IsSerializable() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSerializable", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsSpecialName
		mscorlib::System::Boolean  Type::get_IsSpecialName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsUnicodeClass
		mscorlib::System::Boolean  Type::get_IsUnicodeClass() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsUnicodeClass", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsValueType
		mscorlib::System::Boolean  Type::get_IsValueType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsValueType", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:MemberType
		mscorlib::System::Reflection::MemberTypes::__ENUM__  Type::get_MemberType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::Reflection::MemberTypes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}


		//	Get:Module
		mscorlib::System::Reflection::Module  Type::get_Module() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Module(__result__);
		}


		//	Get:Namespace
		mscorlib::System::String  Type::get_Namespace() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_Namespace", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:ReflectedType
		mscorlib::System::Type  Type::get_ReflectedType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Type(__result__);
		}


		//	Get:TypeHandle
		mscorlib::System::RuntimeTypeHandle  Type::get_TypeHandle() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_TypeHandle", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::RuntimeTypeHandle(__result__);
		}


		//	Get:TypeInitializer
		mscorlib::System::Reflection::ConstructorInfo  Type::get_TypeInitializer() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_TypeInitializer", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::ConstructorInfo(__result__);
		}


		//	Get:UnderlyingSystemType
		mscorlib::System::Type  Type::get_UnderlyingSystemType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_UnderlyingSystemType", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Type(__result__);
		}


		//	Get:IsSecurityTransparent
		mscorlib::System::Boolean  Type::get_IsSecurityTransparent() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsSecurityCritical
		mscorlib::System::Boolean  Type::get_IsSecurityCritical() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsSecuritySafeCritical
		mscorlib::System::Boolean  Type::get_IsSecuritySafeCritical() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:GenericTypeArguments
		std::vector<mscorlib::System::Type*>  Type::get_GenericTypeArguments() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericTypeArguments", __native_object__, 0, NULL, NULL, NULL);
			MonoArray *__array_ptr__ = (MonoArray*)__result__;
			uintptr_t __array_length__ = mono_array_length(__array_ptr__);
			std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
			for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
			{
				MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
				__array_result__.push_back(new mscorlib::System::Type (__array_item__));
			}
			return __array_result__;
		}


		//	Get:ContainsGenericParameters
		mscorlib::System::Boolean  Type::get_ContainsGenericParameters() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_ContainsGenericParameters", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsGenericTypeDefinition
		mscorlib::System::Boolean  Type::get_IsGenericTypeDefinition() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericTypeDefinition", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsGenericType
		mscorlib::System::Boolean  Type::get_IsGenericType() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericType", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsGenericParameter
		mscorlib::System::Boolean  Type::get_IsGenericParameter() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsGenericParameter", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsNested
		mscorlib::System::Boolean  Type::get_IsNested() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsNested", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsVisible
		mscorlib::System::Boolean  Type::get_IsVisible() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_IsVisible", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:GenericParameterPosition
		mscorlib::System::Int32  Type::get_GenericParameterPosition() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterPosition", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:GenericParameterAttributes
		mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__  Type::get_GenericParameterAttributes() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_GenericParameterAttributes", __native_object__, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::Reflection::GenericParameterAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}


		//	Get:DeclaringMethod
		mscorlib::System::Reflection::MethodBase  Type::get_DeclaringMethod() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DeclaringMethod", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::MethodBase(__result__);
		}


		//	Get:StructLayoutAttribute
		mscorlib::System::Runtime::InteropServices::StructLayoutAttribute  Type::get_StructLayoutAttribute() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_StructLayoutAttribute", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Runtime::InteropServices::StructLayoutAttribute(__result__);
		}


		//	Get:Name
		mscorlib::System::String  Type::get_Name() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:MetadataToken
		mscorlib::System::Int32  Type::get_MetadataToken() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:CustomAttributes
		mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  Type::get_CustomAttributes() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:DefaultBinder
		mscorlib::System::Reflection::Binder  Type::get_DefaultBinder()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Type", 0, NULL, "get_DefaultBinder", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Binder(__result__);
		}

		void Type::set_DefaultBinder(mscorlib::System::Reflection::Binder  value)
		{
			throw;
		}



			//	Get/Set:Delimiter
		mscorlib::System::Char Type::get_Delimiter()
		{
			return Global::GetFieldCharValue("mscorlib", "System", "Type", 0, NULL, "Delimiter");
		}

		void Type::set_Delimiter(mscorlib::System::Char  value)
		{
			throw;
		}

			//	Get/Set:EmptyTypes
		std::vector<mscorlib::System::Type*> Type::get_EmptyTypes()
		{
			MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System", "Type", 0, NULL, "EmptyTypes");
			MonoArray *__array_ptr__ = (MonoArray*)__result__;
			uintptr_t __array_length__ = mono_array_length(__array_ptr__);
			std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
			for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
			{
				MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
				__array_result__.push_back(new mscorlib::System::Type (__array_item__));
			}
			return __array_result__;
		}

		void Type::set_EmptyTypes(std::vector<mscorlib::System::Type*>  value)
		{
			throw;
		}

			//	Get/Set:FilterAttribute
		mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> Type::get_FilterAttribute()
		{
			MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System", "Type", 0, NULL, "FilterAttribute");
			return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> ();
		}

		void Type::set_FilterAttribute(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )>  value)
		{
			throw;
		}

			//	Get/Set:FilterName
		mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> Type::get_FilterName()
		{
			MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System", "Type", 0, NULL, "FilterName");
			return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> ();
		}

		void Type::set_FilterName(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )>  value)
		{
			throw;
		}

			//	Get/Set:FilterNameIgnoreCase
		mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> Type::get_FilterNameIgnoreCase()
		{
			MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System", "Type", 0, NULL, "FilterNameIgnoreCase");
			return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> ();
		}

		void Type::set_FilterNameIgnoreCase(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )>  value)
		{
			throw;
		}

			//	Get/Set:Missing
		mscorlib::System::Object Type::get_Missing()
		{
			return Global::GetFieldValue("mscorlib", "System", "Type", 0, NULL, "Missing");
		}

		void Type::set_Missing(mscorlib::System::Object  value)
		{
			throw;
		}


	}
}
