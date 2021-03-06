#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerVisualizerAttribute.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:Description
			mscorlib::System::String  DebuggerVisualizerAttribute::get_Description() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "get_Description", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerVisualizerAttribute::set_Description(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "set_Description", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Target
			mscorlib::System::Type  DebuggerVisualizerAttribute::get_Target() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}

			void DebuggerVisualizerAttribute::set_Target(mscorlib::System::Type  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:TargetTypeName
			mscorlib::System::String  DebuggerVisualizerAttribute::get_TargetTypeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "get_TargetTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void DebuggerVisualizerAttribute::set_TargetTypeName(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "set_TargetTypeName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:VisualizerObjectSourceTypeName
			mscorlib::System::String  DebuggerVisualizerAttribute::get_VisualizerObjectSourceTypeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "get_VisualizerObjectSourceTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:VisualizerTypeName
			mscorlib::System::String  DebuggerVisualizerAttribute::get_VisualizerTypeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerVisualizerAttribute", 0, NULL, "get_VisualizerTypeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  DebuggerVisualizerAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
