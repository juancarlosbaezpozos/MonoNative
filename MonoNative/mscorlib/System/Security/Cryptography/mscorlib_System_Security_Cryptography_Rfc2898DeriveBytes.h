#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_RFC2898DERIVEBYTES_H

#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DeriveBytes.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class Rfc2898DeriveBytes
					: public mscorlib::System::Security::Cryptography::DeriveBytes
					, public virtual mscorlib::System::IDisposable
				{
				public:
					Rfc2898DeriveBytes(mscorlib::System::String password, std::vector<mscorlib::System::Byte*> salt)
					: mscorlib::System::Security::Cryptography::DeriveBytes(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.Rfc2898DeriveBytes"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameters__[0] = (MonoObject*)password;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(salt, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 2, __parameter_types__, __parameters__);
					};
				
					Rfc2898DeriveBytes(mscorlib::System::String password, std::vector<mscorlib::System::Byte*> salt, mscorlib::System::Int32 iterations)
					: mscorlib::System::Security::Cryptography::DeriveBytes(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.Rfc2898DeriveBytes"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)password;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(salt, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[2] = &iterations;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 3, __parameter_types__, __parameters__);
					};
				
					Rfc2898DeriveBytes(std::vector<mscorlib::System::Byte*> password, std::vector<mscorlib::System::Byte*> salt, mscorlib::System::Int32 iterations)
					: mscorlib::System::Security::Cryptography::DeriveBytes(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.Rfc2898DeriveBytes"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(password, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(salt, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[2] = &iterations;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 3, __parameter_types__, __parameters__);
					};
				
					Rfc2898DeriveBytes(mscorlib::System::String password, mscorlib::System::Int32 saltSize)
					: mscorlib::System::Security::Cryptography::DeriveBytes(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.Rfc2898DeriveBytes"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)password;
						__parameters__[1] = &saltSize;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 2, __parameter_types__, __parameters__);
					};
				
					Rfc2898DeriveBytes(mscorlib::System::String password, mscorlib::System::Int32 saltSize, mscorlib::System::Int32 iterations)
					: mscorlib::System::Security::Cryptography::DeriveBytes(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.Rfc2898DeriveBytes"))
					, mscorlib::System::IDisposable(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = (MonoObject*)password;
						__parameters__[1] = &saltSize;
						__parameters__[2] = &iterations;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 3, __parameter_types__, __parameters__);
					};
				
					Rfc2898DeriveBytes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Cryptography::DeriveBytes(nativeTypeInfo)
					, mscorlib::System::IDisposable(NULL)
					{
					};
				
					Rfc2898DeriveBytes(MonoObject *nativeObject)
					: mscorlib::System::Security::Cryptography::DeriveBytes(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					{
					};
				
					~Rfc2898DeriveBytes()
					{
					};
				

					Rfc2898DeriveBytes & operator=(Rfc2898DeriveBytes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual std::vector<mscorlib::System::Byte*>  GetBytes(mscorlib::System::Int32 cb) override;
					virtual void  Reset() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_IterationCount, put=set_IterationCount)) mscorlib::System::Int32  IterationCount;
					__declspec(property(get=get_Salt, put=set_Salt)) std::vector<mscorlib::System::Byte*>  Salt;

					//Get Set Properties Methods
					//	Get/Set:IterationCount
					mscorlib::System::Int32  get_IterationCount();
					void set_IterationCount(mscorlib::System::Int32  value);

					//	Get/Set:Salt
					std::vector<mscorlib::System::Byte*>  get_Salt();
					void set_Salt(std::vector<mscorlib::System::Byte*>  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
