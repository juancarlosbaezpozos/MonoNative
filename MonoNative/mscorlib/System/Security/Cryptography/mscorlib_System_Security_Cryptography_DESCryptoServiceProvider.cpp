#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DESCryptoServiceProvider.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				mscorlib::System::Security::Cryptography::ICryptoTransform DESCryptoServiceProvider::CreateDecryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbKey).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbIV).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DESCryptoServiceProvider", 0, NULL, "CreateDecryptor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				mscorlib::System::Security::Cryptography::ICryptoTransform DESCryptoServiceProvider::CreateEncryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbKey).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbIV).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DESCryptoServiceProvider", 0, NULL, "CreateEncryptor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				void DESCryptoServiceProvider::GenerateIV()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DESCryptoServiceProvider", 0, NULL, "GenerateIV", __native_object__, 0, NULL, NULL, NULL);
				}

				void DESCryptoServiceProvider::GenerateKey()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DESCryptoServiceProvider", 0, NULL, "GenerateKey", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Key
				std::vector<mscorlib::System::Byte*>  DESCryptoServiceProvider::get_Key()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DES", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
				}

				void DESCryptoServiceProvider::set_Key(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DES", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:BlockSize
				mscorlib::System::Int32  DESCryptoServiceProvider::get_BlockSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_BlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void DESCryptoServiceProvider::set_BlockSize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_BlockSize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FeedbackSize
				mscorlib::System::Int32  DESCryptoServiceProvider::get_FeedbackSize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_FeedbackSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void DESCryptoServiceProvider::set_FeedbackSize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_FeedbackSize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:IV
				std::vector<mscorlib::System::Byte*>  DESCryptoServiceProvider::get_IV()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_IV", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
				}

				void DESCryptoServiceProvider::set_IV(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_IV", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeySize
				mscorlib::System::Int32  DESCryptoServiceProvider::get_KeySize()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void DESCryptoServiceProvider::set_KeySize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_KeySize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:LegalBlockSizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  DESCryptoServiceProvider::get_LegalBlockSizes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_LegalBlockSizes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Security::Cryptography::KeySizes (__array_item__));
					}
					return __array_result__;
				}


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  DESCryptoServiceProvider::get_LegalKeySizes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_LegalKeySizes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Security::Cryptography::KeySizes (__array_item__));
					}
					return __array_result__;
				}


				//	Get/Set:Mode
				mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  DESCryptoServiceProvider::get_Mode()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_Mode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Cryptography::CipherMode::__ENUM__*)mono_object_unbox(__result__);
				}

				void DESCryptoServiceProvider::set_Mode(mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_Mode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Padding
				mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  DESCryptoServiceProvider::get_Padding()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_Padding", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__*)mono_object_unbox(__result__);
				}

				void DESCryptoServiceProvider::set_Padding(mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_Padding", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}