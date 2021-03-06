#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CUSTOMACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CUSTOMACE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceFlags.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
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
		namespace Security
		{
			namespace AccessControl
			{

				class CustomAce
					: public mscorlib::System::Security::AccessControl::GenericAce
				{
				public:
					CustomAce(mscorlib::System::Security::AccessControl::AceType::__ENUM__ type, mscorlib::System::Security::AccessControl::AceFlags::__ENUM__ flags, std::vector<mscorlib::System::Byte*> opaque)
					: mscorlib::System::Security::AccessControl::GenericAce(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CustomAce"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.AccessControl", "AceType");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AceFlags");
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						mscorlib::System::Int32 __param_type__ = type;
						__parameters__[0] = &__param_type__;
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[1] = &__param_flags__;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(opaque, "mscorlib", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CustomAce", 3, __parameter_types__, __parameters__);
					};
				
					CustomAce(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::GenericAce(nativeTypeInfo)
					{
					};
				
					CustomAce(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::GenericAce(nativeObject)
					{
					};
				
					~CustomAce()
					{
					};
				

					CustomAce & operator=(CustomAce &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CustomAce &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset) override;
					std::vector<mscorlib::System::Byte*>  GetOpaque();
					void  SetOpaque(std::vector<mscorlib::System::Byte*> opaque);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_OpaqueLength)) mscorlib::System::Int32  OpaqueLength;
					__declspec(property(get=get_AceFlags, put=set_AceFlags)) mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  AceFlags;
					__declspec(property(get=get_AceType)) mscorlib::System::Security::AccessControl::AceType::__ENUM__  AceType;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Public Static Fields
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::AccessControl::CustomAce> MaxOpaqueLength;

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:OpaqueLength
					mscorlib::System::Int32  get_OpaqueLength() const;

					//	Get/Set:AceFlags
					mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  get_AceFlags() const;
					void set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value);

					//	Get:AceType
					mscorlib::System::Security::AccessControl::AceType::__ENUM__  get_AceType() const;

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags() const;

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags() const;

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited() const;

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags() const;

					//	Get/Set:MaxOpaqueLength
					static mscorlib::System::Int32  get_MaxOpaqueLength();
					static void set_MaxOpaqueLength(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
