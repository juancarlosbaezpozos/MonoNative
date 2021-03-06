#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_UIPermissionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Security::IPermission UIPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Clipboard
				mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  UIPermissionAttribute::get_Clipboard() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermissionAttribute", 0, NULL, "get_Clipboard", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void UIPermissionAttribute::set_Clipboard(mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermissionAttribute", 0, NULL, "set_Clipboard", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Window
				mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  UIPermissionAttribute::get_Window() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermissionAttribute", 0, NULL, "get_Window", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void UIPermissionAttribute::set_Window(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermissionAttribute", 0, NULL, "set_Window", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  UIPermissionAttribute::get_Unrestricted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void UIPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  UIPermissionAttribute::get_Action() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::SecurityAction::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void UIPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  UIPermissionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
