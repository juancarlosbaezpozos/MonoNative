#include <mscorlib/System/Collections/mscorlib_System_Collections_Stack.h>
#include <mscorlib/System/mscorlib_System_Array.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			//Public Methods
			mscorlib::System::Collections::Stack Stack::Synchronized(mscorlib::System::Collections::Stack stack)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(stack).name());
					__parameters__[0] = (MonoObject*)stack;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Synchronized", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Stack(__result__);
			}

			void Stack::Clear()
			{
					Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Object Stack::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Boolean Stack::Contains(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Contains", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Stack::CopyTo(mscorlib::System::Array array, mscorlib::System::Int32 index)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(array).name());
					__parameter_types__[1] = Global::GetType(typeid(index).name());
					__parameters__[0] = (MonoObject*)array;
					__parameters__[1] = &index;
					Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::IEnumerator* Stack::GetEnumerator()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "GetEnumerator", __native_object__, 0, NULL, NULL, NULL);
					return new mscorlib::System::Collections::IEnumerator(__result__);
			}

			mscorlib::System::Object Stack::Peek()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Peek", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object Stack::Pop()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Pop", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Stack::Push(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "Push", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::Object*> Stack::ToArray()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "ToArray", __native_object__, 0, NULL, NULL, NULL);
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

			//Get Set Properties Methods
			//	Get:Count
			mscorlib::System::Int32  Stack::get_Count() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "get_Count", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:IsSynchronized
			mscorlib::System::Boolean  Stack::get_IsSynchronized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "get_IsSynchronized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:SyncRoot
			mscorlib::System::Object  Stack::get_SyncRoot() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Collections", "Stack", 0, NULL, "get_SyncRoot", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
