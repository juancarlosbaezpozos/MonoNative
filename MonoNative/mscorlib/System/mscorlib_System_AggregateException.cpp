#include <mscorlib/System/mscorlib_System_AggregateException.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::AggregateException AggregateException::Flatten()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "Flatten", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::AggregateException(__result__);
		}

		void AggregateException::Handle(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Exception )> predicate)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(predicate).name());
				__parameters__[0] = &predicate;
				Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "Handle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::String AggregateException::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		void AggregateException::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Exception AggregateException::GetBaseException()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "GetBaseException", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Exception(__result__);
		}

		//Get Set Properties Methods
		//	Get:InnerExceptions
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::Exception>  AggregateException::get_InnerExceptions()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AggregateException", 0, NULL, "get_InnerExceptions", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Collections::ObjectModel::ReadOnlyCollection<mscorlib::System::Exception>(__result__);
		}


		//	Get:InnerException
		mscorlib::System::Exception  AggregateException::get_InnerException()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_InnerException", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Exception(__result__);
		}


		//	Get/Set:HelpLink
		mscorlib::System::String  AggregateException::get_HelpLink()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HelpLink", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AggregateException::set_HelpLink(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HelpLink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:HResult
		mscorlib::System::Int32  AggregateException::get_HResult()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_HResult", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void AggregateException::set_HResult(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_HResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:Message
		mscorlib::System::String  AggregateException::get_Message()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get/Set:Source
		mscorlib::System::String  AggregateException::get_Source()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Source", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AggregateException::set_Source(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "set_Source", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:StackTrace
		mscorlib::System::String  AggregateException::get_StackTrace()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_StackTrace", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:TargetSite
		mscorlib::System::Reflection::MethodBase  AggregateException::get_TargetSite()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_TargetSite", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::MethodBase(__result__);
		}


		//	Get:Data
		mscorlib::System::Collections::IDictionary  AggregateException::get_Data()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Exception", 0, NULL, "get_Data", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Collections::IDictionary(__result__);
		}



	}
}
