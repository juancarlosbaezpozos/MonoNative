#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_UMALQURACALENDAR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_UMALQURACALENDAR_H

#include <mscorlib/System/Globalization/mscorlib_System_Globalization_Calendar.h>
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

			class UmAlQuraCalendar
				: public mscorlib::System::Globalization::Calendar
				, public virtual mscorlib::System::ICloneable
			{
			public:
				UmAlQuraCalendar()
				: mscorlib::System::Globalization::Calendar(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Globalization.UmAlQuraCalendar"))
				, mscorlib::System::ICloneable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Globalization", "UmAlQuraCalendar");
				};
			
				UmAlQuraCalendar(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Globalization::Calendar(nativeTypeInfo)
				, mscorlib::System::ICloneable(NULL)
				{
				};
			
				UmAlQuraCalendar(MonoObject *nativeObject)
				: mscorlib::System::Globalization::Calendar(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				{
				};
			
				~UmAlQuraCalendar()
				{
				};
			

				UmAlQuraCalendar & operator=(UmAlQuraCalendar &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::DateTime  AddMonths(mscorlib::System::DateTime time, mscorlib::System::Int32 months) override;
				virtual mscorlib::System::DateTime  AddYears(mscorlib::System::DateTime time, mscorlib::System::Int32 years) override;
				virtual mscorlib::System::Int32  GetDayOfMonth(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::DayOfWeek::__ENUM__  GetDayOfWeek(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::Int32  GetDayOfYear(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::Int32  GetDaysInMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Int32  GetDaysInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Int32  GetEra(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::Int32  GetLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Int32  GetMonth(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::Int32  GetMonthsInYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Int32  GetYear(mscorlib::System::DateTime time) override;
				virtual mscorlib::System::Boolean  IsLeapDay(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Boolean  IsLeapMonth(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Boolean  IsLeapYear(mscorlib::System::Int32 year, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::DateTime  ToDateTime(mscorlib::System::Int32 year, mscorlib::System::Int32 month, mscorlib::System::Int32 day, mscorlib::System::Int32 hour, mscorlib::System::Int32 minute, mscorlib::System::Int32 second, mscorlib::System::Int32 millisecond, mscorlib::System::Int32 era) override;
				virtual mscorlib::System::Int32  ToFourDigitYear(mscorlib::System::Int32 year) override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Eras)) std::vector<mscorlib::System::Int32*>  Eras;
				__declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax)) mscorlib::System::Int32  TwoDigitYearMax;
				__declspec(property(get=get_AlgorithmType)) mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  AlgorithmType;
				__declspec(property(get=get_MinSupportedDateTime)) mscorlib::System::DateTime  MinSupportedDateTime;
				__declspec(property(get=get_MaxSupportedDateTime)) mscorlib::System::DateTime  MaxSupportedDateTime;
				__declspec(property(get=get_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;

				//Public Static Fields
				static Property<mscorlib::System::Int32> UmAlQuraEra;

				//Get Set Properties Methods
				//	Get:Eras
				std::vector<mscorlib::System::Int32*>  get_Eras();

				//	Get/Set:TwoDigitYearMax
				mscorlib::System::Int32  get_TwoDigitYearMax();
				void set_TwoDigitYearMax(mscorlib::System::Int32  value);

				//	Get:AlgorithmType
				mscorlib::System::Globalization::CalendarAlgorithmType::__ENUM__  get_AlgorithmType();

				//	Get:MinSupportedDateTime
				mscorlib::System::DateTime  get_MinSupportedDateTime();

				//	Get:MaxSupportedDateTime
				mscorlib::System::DateTime  get_MaxSupportedDateTime();

				//	Get:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly();

				//	Get/Set:UmAlQuraEra
				static mscorlib::System::Int32  get_UmAlQuraEra();
				static void set_UmAlQuraEra(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
