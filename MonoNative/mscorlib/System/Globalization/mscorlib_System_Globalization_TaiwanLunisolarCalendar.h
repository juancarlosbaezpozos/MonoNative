#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_TAIWANLUNISOLARCALENDAR_H

#include <mscorlib/System/Globalization/mscorlib_System_Globalization_EastAsianLunisolarCalendar.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/mscorlib_System_DayOfWeek.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CalendarAlgorithmType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CalendarWeekRule.h>

namespace mscorlib
{
	namespace System
	{

		class DateTime;
		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class TaiwanLunisolarCalendar
				: public mscorlib::System::Globalization::EastAsianLunisolarCalendar
				, public virtual mscorlib::System::ICloneable
			{
			public:
				TaiwanLunisolarCalendar()
				: mscorlib::System::Globalization::EastAsianLunisolarCalendar(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.TaiwanLunisolarCalendar"))
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "TaiwanLunisolarCalendar");
				};
			
				TaiwanLunisolarCalendar(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Globalization::EastAsianLunisolarCalendar(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				TaiwanLunisolarCalendar(MonoObject *nativeObject)
				: mscorlib::System::Globalization::EastAsianLunisolarCalendar(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~TaiwanLunisolarCalendar()
				{
				};
			

				TaiwanLunisolarCalendar & operator=(TaiwanLunisolarCalendar &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(TaiwanLunisolarCalendar &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Int32  GetEra(mscorlib::System::DateTime time) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Eras)) std::vector<mscorlib::System::Int32*>  Eras;
				__declspec(property(get=get_MinSupportedDateTime)) mscorlib::System::DateTime  MinSupportedDateTime;
				__declspec(property(get=get_MaxSupportedDateTime)) mscorlib::System::DateTime  MaxSupportedDateTime;
				__declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax)) mscorlib::System::Int32  TwoDigitYearMax;
				__declspec(property(get=get_AlgorithmType)) mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  AlgorithmType;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;

				//Get Set Properties Methods
				//	Get:Eras
				std::vector<mscorlib::System::Int32*>  get_Eras() const;

				//	Get:MinSupportedDateTime
				mscorlib::System::DateTime  get_MinSupportedDateTime() const;

				//	Get:MaxSupportedDateTime
				mscorlib::System::DateTime  get_MaxSupportedDateTime() const;

				//	Get/Set:TwoDigitYearMax
				mscorlib::System::Int32  get_TwoDigitYearMax() const;
				void set_TwoDigitYearMax(mscorlib::System::Int32  value);

				//	Get:AlgorithmType
				mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  get_AlgorithmType() const;

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
