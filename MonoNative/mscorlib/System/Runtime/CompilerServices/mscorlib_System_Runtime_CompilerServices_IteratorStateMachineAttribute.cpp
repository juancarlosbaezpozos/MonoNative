#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_IteratorStateMachineAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:StateMachineType
				mscorlib::System::Type  IteratorStateMachineAttribute::get_StateMachineType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "StateMachineAttribute", 0, NULL, "get_StateMachineType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}

				void IteratorStateMachineAttribute::set_StateMachineType(mscorlib::System::Type  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "StateMachineAttribute", 0, NULL, "set_StateMachineType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  IteratorStateMachineAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
