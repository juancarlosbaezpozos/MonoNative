#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLESECURITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLESECURITY_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_NativeObjectSecurity.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlModification.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
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

				class AccessRuleBase;
				class EventWaitHandleAccessRule;
				class AuditRuleBase;
				class EventWaitHandleAuditRule;
				class AuthorizationRuleCollection;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityReference;
				

			}
		}
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

				class EventWaitHandleSecurity
					: public mscorlib::System::Security::AccessControl::NativeObjectSecurity
				{
				public:
					EventWaitHandleSecurity()
					: mscorlib::System::Security::AccessControl::NativeObjectSecurity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.EventWaitHandleSecurity"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "EventWaitHandleSecurity");
					};
				
					EventWaitHandleSecurity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::NativeObjectSecurity(nativeTypeInfo)
					{
					};
				
					EventWaitHandleSecurity(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::NativeObjectSecurity(nativeObject)
					{
					};
				
					~EventWaitHandleSecurity()
					{
					};
				

					EventWaitHandleSecurity & operator=(EventWaitHandleSecurity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::AccessControl::AccessRuleBase  AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type) override;
					void  AddAccessRule(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					mscorlib::System::Boolean  RemoveAccessRule(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					void  RemoveAccessRuleAll(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					void  RemoveAccessRuleSpecific(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					void  ResetAccessRule(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					void  SetAccessRule(mscorlib::System::Security::AccessControl::EventWaitHandleAccessRule rule);
					virtual mscorlib::System::Security::AccessControl::AuditRuleBase  AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags) override;
					void  AddAuditRule(mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule);
					mscorlib::System::Boolean  RemoveAuditRule(mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule);
					void  RemoveAuditRuleAll(mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule);
					void  RemoveAuditRuleSpecific(mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule);
					void  SetAuditRule(mscorlib::System::Security::AccessControl::EventWaitHandleAuditRule rule);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccessRightType)) mscorlib::System::Type  AccessRightType;
					__declspec(property(get=get_AccessRuleType)) mscorlib::System::Type  AccessRuleType;
					__declspec(property(get=get_AuditRuleType)) mscorlib::System::Type  AuditRuleType;
					__declspec(property(get=get_AreAccessRulesCanonical)) mscorlib::System::Boolean  AreAccessRulesCanonical;
					__declspec(property(get=get_AreAccessRulesProtected)) mscorlib::System::Boolean  AreAccessRulesProtected;
					__declspec(property(get=get_AreAuditRulesCanonical)) mscorlib::System::Boolean  AreAuditRulesCanonical;
					__declspec(property(get=get_AreAuditRulesProtected)) mscorlib::System::Boolean  AreAuditRulesProtected;

					//Get Set Properties Methods
					//	Get:AccessRightType
					mscorlib::System::Type  get_AccessRightType() const;

					//	Get:AccessRuleType
					mscorlib::System::Type  get_AccessRuleType() const;

					//	Get:AuditRuleType
					mscorlib::System::Type  get_AuditRuleType() const;

					//	Get:AreAccessRulesCanonical
					mscorlib::System::Boolean  get_AreAccessRulesCanonical() const;

					//	Get:AreAccessRulesProtected
					mscorlib::System::Boolean  get_AreAccessRulesProtected() const;

					//	Get:AreAuditRulesCanonical
					mscorlib::System::Boolean  get_AreAuditRulesCanonical() const;

					//	Get:AreAuditRulesProtected
					mscorlib::System::Boolean  get_AreAuditRulesProtected() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
