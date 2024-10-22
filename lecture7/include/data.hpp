#pragma once

namespace university {
    using ushort = unsigned short;

    class Date {
        public:
            //Date(ushort day, ushort month, ushort year);
            void print_date() const;
            void get_attribute_offsets() const;
            university::Date date;
            Date(){
                day_ = 15;
                month_ = 2;
                year_ = 2025;
            }

        private:
            ushort day_;
            ushort month_;
            ushort year_;

            bool is_valid_date(ushort day, ushort month, ushort year) const;
            int get_days_in_month(ushort month, ushort year) const;
            static bool is_leap_year(ushort year);
    }
}