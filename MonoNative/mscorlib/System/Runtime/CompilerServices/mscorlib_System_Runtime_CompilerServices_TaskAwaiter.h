#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_TASKAWAITER_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_INotifyCompletion.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ICriticalNotifyCompletion.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace CompilerServices
			{

				class TaskAwaiterBase
					: public mscorlib::System::ValueType
					, public virtual mscorlib::System::Runtime::CompilerServices::INotifyCompletion
					, public virtual mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion
				{
				public:
					TaskAwaiterBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(NULL)
					, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(NULL)
					{
					};
				
					TaskAwaiterBase(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					, mscorlib::System::Runtime::CompilerServices::INotifyCompletion(nativeObject)
					, mscorlib::System::Runtime::CompilerServices::ICriticalNotifyCompletion(nativeObject)
					{
					};
				
					~TaskAwaiterBase()
					{
					};
				

					TaskAwaiterBase & operator=(TaskAwaiterBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(TaskAwaiterBase &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  GetResult();
					virtual void  OnCompleted(mscorlib::Callback<void  ()> continuation);
					virtual void  UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsCompleted)) mscorlib::System::Boolean  IsCompleted;

					//Get Set Properties Methods
					//	Get:IsCompleted
					mscorlib::System::Boolean  get_IsCompleted() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
