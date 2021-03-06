#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_DEBUGGER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			class Debugger
				: public mscorlib::System::Object
			{
			public:
				Debugger()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Diagnostics.Debugger"))
				{
					__native_object__ = Global::New("mscorlib", "System.Diagnostics", "Debugger");
				};
			
				Debugger(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Debugger(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Debugger()
				{
				};
			

				Debugger & operator=(Debugger &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Debugger &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  Break();
				static mscorlib::System::Boolean  IsLogging();
				static mscorlib::System::Boolean  Launch();
				static void  Log(mscorlib::System::Int32 level, mscorlib::System::String category, mscorlib::System::String message);
				static void  Log(mscorlib::System::Int32 level, const char *category, const char *message);
				static void  NotifyOfCrossThreadDependency();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Boolean , mscorlib::System::Diagnostics::Debugger> IsAttached;

				//Public Static Fields
				static Property<mscorlib::System::String , mscorlib::System::Diagnostics::Debugger> DefaultCategory;

				//Get Set Static Properties Methods
				//	Get:IsAttached
				static mscorlib::System::Boolean  get_IsAttached();
				static void set_IsAttached(mscorlib::System::Boolean  value);


				//	Get/Set:DefaultCategory
				static mscorlib::System::String  get_DefaultCategory();
				static void set_DefaultCategory(mscorlib::System::String  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
