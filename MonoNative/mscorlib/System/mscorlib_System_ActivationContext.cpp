#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_Enum.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::ActivationContext ActivationContext::CreatePartialActivationContext(mscorlib::System::ApplicationIdentity identity)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(identity).name());
				__parameters__[0] = (MonoObject*)identity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ActivationContext", 0, NULL, "CreatePartialActivationContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::ActivationContext(__result__);
		}

		mscorlib::System::ActivationContext ActivationContext::CreatePartialActivationContext(mscorlib::System::ApplicationIdentity identity, std::vector<mscorlib::System::String*> manifestPaths)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(identity).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(manifestPaths).name()))->eklass);
				__parameters__[0] = (MonoObject*)identity;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(manifestPaths, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ActivationContext", 0, NULL, "CreatePartialActivationContext", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::ActivationContext(__result__);
		}

		void ActivationContext::Dispose()
		{
				Global::InvokeMethod("mscorlib", "System", "ActivationContext", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
		}

		//Get Set Properties Methods
		//	Get:Form
		mscorlib::System::ActivationContext::ContextForm::__ENUM__  ActivationContext::get_Form()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ActivationContext", 0, NULL, "get_Form", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::ActivationContext::ContextForm::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:Identity
		mscorlib::System::ApplicationIdentity  ActivationContext::get_Identity()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ActivationContext", 0, NULL, "get_Identity", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::ApplicationIdentity(__result__);
		}



	}
}