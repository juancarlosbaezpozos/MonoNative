#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_1_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_1_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_INotifyCompletion.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				template<typename TResult>
				class TaskAwaiter
					: public mscorlib::System::ValueType
					, public virtual mscorlib::System::Runtime::CompilerServices::INotifyCompletion
					, public virtual mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion
				{
				public:
					TaskAwaiter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(NULL)
					, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(NULL)
					{
					};
				
					TaskAwaiter(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(nativeObject)
					, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(nativeObject)
					{
					};
				
					~TaskAwaiter()
					{
					};
				

					TaskAwaiter & operator=(TaskAwaiter &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(TaskAwaiter &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					TResult  GetResult()
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "TaskAwaiter`1", 1, __generic_types__, "GetResult", __native_object__, 0, NULL, NULL, NULL);
						return TResult(__result__);
					};
					
					virtual void  OnCompleted(mscorlib::Callback<void  ()> continuation)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "TaskAwaiter`1", 1, __generic_types__, "OnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual void  UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "TaskAwaiter`1", 1, __generic_types__, "UnsafeOnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					};
					
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;

					//Get Set Properties Methods
					//	Get:IsCompleted
					mscorlib::System::Boolean  get_IsCompleted() const
					{
						MonoType *__generic_types__[1];
						__generic_types__[0] = Global::GetType(typeid(TResult).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "TaskAwaiter`1", 1, __generic_types__, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
