#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_SAFEHANDLES_SAFEFILEHANDLE_H

#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeHandleZeroOrMinusOneIsInvalid.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
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
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class SafeFileHandle
					: public mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
					, public virtual mscorlib::System::IDisposable
				{
				public:
					SafeFileHandle(mscorlib::System::IntPtr preexistingHandle, mscorlib::System::Boolean ownsHandle)
					: mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","Microsoft.Win32.SafeHandles.SafeFileHandle"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = preexistingHandle;
						__parameters__[1] = reinterpret_cast<void*>(ownsHandle);
						__native_object__ = Global::New("mscorlib", "Microsoft.Win32.SafeHandles", "SafeFileHandle", 2, __parameter_types__, __parameters__);
					};
				
					SafeFileHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					SafeFileHandle(MonoObject *nativeObject)
					: mscorlib::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~SafeFileHandle()
					{
					};
				

					SafeFileHandle & operator=(SafeFileHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(SafeFileHandle &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IsInvalid)) mscorlib::System::Boolean  IsInvalid;
					__declspec(property(get=get_IsClosed)) mscorlib::System::Boolean  IsClosed;

					//Get Set Properties Methods
					//	Get:IsInvalid
					mscorlib::System::Boolean  get_IsInvalid() const;

					//	Get:IsClosed
					mscorlib::System::Boolean  get_IsClosed() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
