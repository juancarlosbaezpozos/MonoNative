#include <mscorlib/System/mscorlib_System_Console.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/mscorlib_System_IO_TextWriter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_TextReader.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/mscorlib_System_ConsoleKeyInfo.h>
#include <mscorlib/System/mscorlib_System_ConsoleCancelEventArgs.h>



namespace mscorlib
{
	namespace System
	{

		Property<mscorlib::System::IO::TextWriter , mscorlib::System::Console> mscorlib::System::Console::Error(&mscorlib::System::Console::get_Error, &mscorlib::System::Console::set_Error);
		Property<mscorlib::System::IO::TextWriter , mscorlib::System::Console> mscorlib::System::Console::Out(&mscorlib::System::Console::get_Out, &mscorlib::System::Console::set_Out);
		Property<mscorlib::System::IO::TextReader , mscorlib::System::Console> mscorlib::System::Console::In(&mscorlib::System::Console::get_In, &mscorlib::System::Console::set_In);
		Property<mscorlib::System::Text::Encoding , mscorlib::System::Console> mscorlib::System::Console::InputEncoding(&mscorlib::System::Console::get_InputEncoding, &mscorlib::System::Console::set_InputEncoding);
		Property<mscorlib::System::Text::Encoding , mscorlib::System::Console> mscorlib::System::Console::OutputEncoding(&mscorlib::System::Console::get_OutputEncoding, &mscorlib::System::Console::set_OutputEncoding);
		Property<mscorlib::System::ConsoleColor::__ENUM__ , mscorlib::System::Console> mscorlib::System::Console::BackgroundColor(&mscorlib::System::Console::get_BackgroundColor, &mscorlib::System::Console::set_BackgroundColor);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::BufferHeight(&mscorlib::System::Console::get_BufferHeight, &mscorlib::System::Console::set_BufferHeight);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::BufferWidth(&mscorlib::System::Console::get_BufferWidth, &mscorlib::System::Console::set_BufferWidth);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::CapsLock(&mscorlib::System::Console::get_CapsLock, &mscorlib::System::Console::set_CapsLock);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::CursorLeft(&mscorlib::System::Console::get_CursorLeft, &mscorlib::System::Console::set_CursorLeft);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::CursorTop(&mscorlib::System::Console::get_CursorTop, &mscorlib::System::Console::set_CursorTop);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::CursorSize(&mscorlib::System::Console::get_CursorSize, &mscorlib::System::Console::set_CursorSize);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::CursorVisible(&mscorlib::System::Console::get_CursorVisible, &mscorlib::System::Console::set_CursorVisible);
		Property<mscorlib::System::ConsoleColor::__ENUM__ , mscorlib::System::Console> mscorlib::System::Console::ForegroundColor(&mscorlib::System::Console::get_ForegroundColor, &mscorlib::System::Console::set_ForegroundColor);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::KeyAvailable(&mscorlib::System::Console::get_KeyAvailable, &mscorlib::System::Console::set_KeyAvailable);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::LargestWindowHeight(&mscorlib::System::Console::get_LargestWindowHeight, &mscorlib::System::Console::set_LargestWindowHeight);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::LargestWindowWidth(&mscorlib::System::Console::get_LargestWindowWidth, &mscorlib::System::Console::set_LargestWindowWidth);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::NumberLock(&mscorlib::System::Console::get_NumberLock, &mscorlib::System::Console::set_NumberLock);
		Property<mscorlib::System::String , mscorlib::System::Console> mscorlib::System::Console::Title(&mscorlib::System::Console::get_Title, &mscorlib::System::Console::set_Title);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::TreatControlCAsInput(&mscorlib::System::Console::get_TreatControlCAsInput, &mscorlib::System::Console::set_TreatControlCAsInput);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::WindowHeight(&mscorlib::System::Console::get_WindowHeight, &mscorlib::System::Console::set_WindowHeight);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::WindowLeft(&mscorlib::System::Console::get_WindowLeft, &mscorlib::System::Console::set_WindowLeft);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::WindowTop(&mscorlib::System::Console::get_WindowTop, &mscorlib::System::Console::set_WindowTop);
		Property<mscorlib::System::Int32 , mscorlib::System::Console> mscorlib::System::Console::WindowWidth(&mscorlib::System::Console::get_WindowWidth, &mscorlib::System::Console::set_WindowWidth);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::IsErrorRedirected(&mscorlib::System::Console::get_IsErrorRedirected, &mscorlib::System::Console::set_IsErrorRedirected);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::IsOutputRedirected(&mscorlib::System::Console::get_IsOutputRedirected, &mscorlib::System::Console::set_IsOutputRedirected);
		Property<mscorlib::System::Boolean , mscorlib::System::Console> mscorlib::System::Console::IsInputRedirected(&mscorlib::System::Console::get_IsInputRedirected, &mscorlib::System::Console::set_IsInputRedirected);
		//Public Methods
		mscorlib::System::IO::Stream Console::OpenStandardError()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardError", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		mscorlib::System::IO::Stream Console::OpenStandardError(mscorlib::System::Int32 bufferSize)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bufferSize).name());
				__parameters__[0] = &bufferSize;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardError", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		mscorlib::System::IO::Stream Console::OpenStandardInput()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardInput", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		mscorlib::System::IO::Stream Console::OpenStandardInput(mscorlib::System::Int32 bufferSize)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bufferSize).name());
				__parameters__[0] = &bufferSize;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardInput", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		mscorlib::System::IO::Stream Console::OpenStandardOutput()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardOutput", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		mscorlib::System::IO::Stream Console::OpenStandardOutput(mscorlib::System::Int32 bufferSize)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(bufferSize).name());
				__parameters__[0] = &bufferSize;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "OpenStandardOutput", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::IO::Stream(__result__);
		}

		void Console::SetError(mscorlib::System::IO::TextWriter newError)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(newError).name());
				__parameters__[0] = (MonoObject*)newError;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetError", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::SetIn(mscorlib::System::IO::TextReader newIn)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(newIn).name());
				__parameters__[0] = (MonoObject*)newIn;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetIn", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::SetOut(mscorlib::System::IO::TextWriter newOut)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(newOut).name());
				__parameters__[0] = (MonoObject*)newOut;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetOut", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(std::vector<mscorlib::System::Char*> buffer)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *format, std::vector<mscorlib::System::Object*> arg)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &index;
				__parameters__[2] = &count;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameter_types__[4] = Global::GetType(typeid(arg3).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				__parameters__[4] = (MonoObject*)arg3;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Console::Write(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameter_types__[4] = Global::GetType(typeid(arg3).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				__parameters__[4] = (MonoObject*)arg3;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Write", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine()
		{
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 0, NULL, NULL, NULL);
		}

		void Console::WriteLine(mscorlib::System::Boolean value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Char value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(std::vector<mscorlib::System::Char*> buffer)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Decimal value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Double value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Int32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Int64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::Single value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::UInt32 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::UInt64 value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *format, mscorlib::System::Object arg0)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String format, std::vector<mscorlib::System::Object*> arg)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *format, std::vector<mscorlib::System::Object*> arg)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(arg, typeid(mscorlib::System::Object).name());
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(std::vector<mscorlib::System::Char*> buffer, mscorlib::System::Int32 index, mscorlib::System::Int32 count)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Char")), 1));
				__parameter_types__[1] = Global::GetType(typeid(index).name());
				__parameter_types__[2] = Global::GetType(typeid(count).name());
				__parameters__[0] = Global::FromPrimitiveArray<mscorlib::System::Char*>(buffer, typeid(mscorlib::System::Char).name());
				__parameters__[1] = &index;
				__parameters__[2] = &count;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(mscorlib::System::String format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(format).name());
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameter_types__[4] = Global::GetType(typeid(arg3).name());
				__parameters__[0] = (MonoObject*)format;
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				__parameters__[4] = (MonoObject*)arg3;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		void Console::WriteLine(const char *format, mscorlib::System::Object arg0, mscorlib::System::Object arg1, mscorlib::System::Object arg2, mscorlib::System::Object arg3)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(arg0).name());
				__parameter_types__[2] = Global::GetType(typeid(arg1).name());
				__parameter_types__[3] = Global::GetType(typeid(arg2).name());
				__parameter_types__[4] = Global::GetType(typeid(arg3).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), format);
				__parameters__[1] = (MonoObject*)arg0;
				__parameters__[2] = (MonoObject*)arg1;
				__parameters__[3] = (MonoObject*)arg2;
				__parameters__[4] = (MonoObject*)arg3;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "WriteLine", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 Console::Read()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Read", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String Console::ReadLine()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "ReadLine", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		void Console::Beep()
		{
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Beep", NullMonoObject, 0, NULL, NULL, NULL);
		}

		void Console::Beep(mscorlib::System::Int32 frequency, mscorlib::System::Int32 duration)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(frequency).name());
				__parameter_types__[1] = Global::GetType(typeid(duration).name());
				__parameters__[0] = &frequency;
				__parameters__[1] = &duration;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Beep", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::Clear()
		{
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "Clear", NullMonoObject, 0, NULL, NULL, NULL);
		}

		void Console::MoveBufferArea(mscorlib::System::Int32 sourceLeft, mscorlib::System::Int32 sourceTop, mscorlib::System::Int32 sourceWidth, mscorlib::System::Int32 sourceHeight, mscorlib::System::Int32 targetLeft, mscorlib::System::Int32 targetTop)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(sourceLeft).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceTop).name());
				__parameter_types__[2] = Global::GetType(typeid(sourceWidth).name());
				__parameter_types__[3] = Global::GetType(typeid(sourceHeight).name());
				__parameter_types__[4] = Global::GetType(typeid(targetLeft).name());
				__parameter_types__[5] = Global::GetType(typeid(targetTop).name());
				__parameters__[0] = &sourceLeft;
				__parameters__[1] = &sourceTop;
				__parameters__[2] = &sourceWidth;
				__parameters__[3] = &sourceHeight;
				__parameters__[4] = &targetLeft;
				__parameters__[5] = &targetTop;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "MoveBufferArea", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
		}

		void Console::MoveBufferArea(mscorlib::System::Int32 sourceLeft, mscorlib::System::Int32 sourceTop, mscorlib::System::Int32 sourceWidth, mscorlib::System::Int32 sourceHeight, mscorlib::System::Int32 targetLeft, mscorlib::System::Int32 targetTop, mscorlib::System::Char sourceChar, mscorlib::System::ConsoleColor::__ENUM__ sourceForeColor, mscorlib::System::ConsoleColor::__ENUM__ sourceBackColor)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(sourceLeft).name());
				__parameter_types__[1] = Global::GetType(typeid(sourceTop).name());
				__parameter_types__[2] = Global::GetType(typeid(sourceWidth).name());
				__parameter_types__[3] = Global::GetType(typeid(sourceHeight).name());
				__parameter_types__[4] = Global::GetType(typeid(targetLeft).name());
				__parameter_types__[5] = Global::GetType(typeid(targetTop).name());
				__parameter_types__[6] = Global::GetType(typeid(sourceChar).name());
				__parameter_types__[7] = Global::GetType(typeid(sourceForeColor).name());
				__parameter_types__[8] = Global::GetType(typeid(sourceBackColor).name());
				__parameters__[0] = &sourceLeft;
				__parameters__[1] = &sourceTop;
				__parameters__[2] = &sourceWidth;
				__parameters__[3] = &sourceHeight;
				__parameters__[4] = &targetLeft;
				__parameters__[5] = &targetTop;
				__parameters__[6] = &sourceChar;
				mscorlib::System::Int32 __param_sourceForeColor__ = sourceForeColor;
				__parameters__[7] = &__param_sourceForeColor__;
				mscorlib::System::Int32 __param_sourceBackColor__ = sourceBackColor;
				__parameters__[8] = &__param_sourceBackColor__;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "MoveBufferArea", NullMonoObject, 9, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::ConsoleKeyInfo Console::ReadKey()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "ReadKey", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::ConsoleKeyInfo(__result__);
		}

		mscorlib::System::ConsoleKeyInfo Console::ReadKey(mscorlib::System::Boolean intercept)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(intercept).name());
				__parameters__[0] = reinterpret_cast<void*>(intercept);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "ReadKey", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::ConsoleKeyInfo(__result__);
		}

		void Console::ResetColor()
		{
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "ResetColor", NullMonoObject, 0, NULL, NULL, NULL);
		}

		void Console::SetBufferSize(mscorlib::System::Int32 width, mscorlib::System::Int32 height)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(width).name());
				__parameter_types__[1] = Global::GetType(typeid(height).name());
				__parameters__[0] = &width;
				__parameters__[1] = &height;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetBufferSize", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::SetCursorPosition(mscorlib::System::Int32 left, mscorlib::System::Int32 top)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(left).name());
				__parameter_types__[1] = Global::GetType(typeid(top).name());
				__parameters__[0] = &left;
				__parameters__[1] = &top;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetCursorPosition", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::SetWindowPosition(mscorlib::System::Int32 left, mscorlib::System::Int32 top)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(left).name());
				__parameter_types__[1] = Global::GetType(typeid(top).name());
				__parameters__[0] = &left;
				__parameters__[1] = &top;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetWindowPosition", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		void Console::SetWindowSize(mscorlib::System::Int32 width, mscorlib::System::Int32 height)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(width).name());
				__parameter_types__[1] = Global::GetType(typeid(height).name());
				__parameters__[0] = &width;
				__parameters__[1] = &height;
				Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "SetWindowSize", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Static Properties Methods
		//	Get:Error
		mscorlib::System::IO::TextWriter  Console::get_Error()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_Error", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::IO::TextWriter(__result__);
		}

		void Console::set_Error(mscorlib::System::IO::TextWriter  value)
		{
			throw;
		}


		//	Get:Out
		mscorlib::System::IO::TextWriter  Console::get_Out()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_Out", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::IO::TextWriter(__result__);
		}

		void Console::set_Out(mscorlib::System::IO::TextWriter  value)
		{
			throw;
		}


		//	Get:In
		mscorlib::System::IO::TextReader  Console::get_In()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_In", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::IO::TextReader(__result__);
		}

		void Console::set_In(mscorlib::System::IO::TextReader  value)
		{
			throw;
		}


		//	Get/Set:InputEncoding
		mscorlib::System::Text::Encoding  Console::get_InputEncoding()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_InputEncoding", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::Text::Encoding(__result__);
		}

		void Console::set_InputEncoding(mscorlib::System::Text::Encoding  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_InputEncoding", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:OutputEncoding
		mscorlib::System::Text::Encoding  Console::get_OutputEncoding()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_OutputEncoding", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::Text::Encoding(__result__);
		}

		void Console::set_OutputEncoding(mscorlib::System::Text::Encoding  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_OutputEncoding", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:BackgroundColor
		mscorlib::System::ConsoleColor::__ENUM__  Console::get_BackgroundColor()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_BackgroundColor", NullMonoObject, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::ConsoleColor::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		void Console::set_BackgroundColor(mscorlib::System::ConsoleColor::__ENUM__  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			mscorlib::System::Int32 __param_value__ = value;
			__parameters__[0] = &__param_value__;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_BackgroundColor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:BufferHeight
		mscorlib::System::Int32  Console::get_BufferHeight()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_BufferHeight", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_BufferHeight(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_BufferHeight", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:BufferWidth
		mscorlib::System::Int32  Console::get_BufferWidth()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_BufferWidth", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_BufferWidth(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_BufferWidth", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:CapsLock
		mscorlib::System::Boolean  Console::get_CapsLock()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_CapsLock", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_CapsLock(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get/Set:CursorLeft
		mscorlib::System::Int32  Console::get_CursorLeft()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_CursorLeft", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_CursorLeft(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_CursorLeft", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:CursorTop
		mscorlib::System::Int32  Console::get_CursorTop()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_CursorTop", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_CursorTop(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_CursorTop", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:CursorSize
		mscorlib::System::Int32  Console::get_CursorSize()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_CursorSize", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_CursorSize(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_CursorSize", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:CursorVisible
		mscorlib::System::Boolean  Console::get_CursorVisible()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_CursorVisible", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_CursorVisible(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_CursorVisible", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ForegroundColor
		mscorlib::System::ConsoleColor::__ENUM__  Console::get_ForegroundColor()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_ForegroundColor", NullMonoObject, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::ConsoleColor::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}

		void Console::set_ForegroundColor(mscorlib::System::ConsoleColor::__ENUM__  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			mscorlib::System::Int32 __param_value__ = value;
			__parameters__[0] = &__param_value__;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_ForegroundColor", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:KeyAvailable
		mscorlib::System::Boolean  Console::get_KeyAvailable()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_KeyAvailable", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_KeyAvailable(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:LargestWindowHeight
		mscorlib::System::Int32  Console::get_LargestWindowHeight()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_LargestWindowHeight", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_LargestWindowHeight(mscorlib::System::Int32  value)
		{
			throw;
		}


		//	Get:LargestWindowWidth
		mscorlib::System::Int32  Console::get_LargestWindowWidth()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_LargestWindowWidth", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_LargestWindowWidth(mscorlib::System::Int32  value)
		{
			throw;
		}


		//	Get:NumberLock
		mscorlib::System::Boolean  Console::get_NumberLock()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_NumberLock", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_NumberLock(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get/Set:Title
		mscorlib::System::String  Console::get_Title()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_Title", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void Console::set_Title(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_Title", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:TreatControlCAsInput
		mscorlib::System::Boolean  Console::get_TreatControlCAsInput()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_TreatControlCAsInput", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_TreatControlCAsInput(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_TreatControlCAsInput", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:WindowHeight
		mscorlib::System::Int32  Console::get_WindowHeight()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_WindowHeight", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_WindowHeight(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_WindowHeight", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:WindowLeft
		mscorlib::System::Int32  Console::get_WindowLeft()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_WindowLeft", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_WindowLeft(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_WindowLeft", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:WindowTop
		mscorlib::System::Int32  Console::get_WindowTop()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_WindowTop", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_WindowTop(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_WindowTop", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:WindowWidth
		mscorlib::System::Int32  Console::get_WindowWidth()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_WindowWidth", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Console::set_WindowWidth(mscorlib::System::Int32  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "set_WindowWidth", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:IsErrorRedirected
		mscorlib::System::Boolean  Console::get_IsErrorRedirected()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_IsErrorRedirected", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_IsErrorRedirected(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:IsOutputRedirected
		mscorlib::System::Boolean  Console::get_IsOutputRedirected()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_IsOutputRedirected", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_IsOutputRedirected(mscorlib::System::Boolean  value)
		{
			throw;
		}


		//	Get:IsInputRedirected
		mscorlib::System::Boolean  Console::get_IsInputRedirected()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Console", 0, NULL, "get_IsInputRedirected", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void Console::set_IsInputRedirected(mscorlib::System::Boolean  value)
		{
			throw;
		}




	}
}
