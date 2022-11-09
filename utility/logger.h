#ifndef LOGGER_H_
#define LOGGER_H_
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

namespace mylog {
    namespace utility {
        using namespace std;
        class Logger {
        public:
            enum Level {
                DEBUG = 0,
                INFOR,
                WARN,
                ERROR,
                FATAL,
                LEVEL_COUNT
        };
        static Logger* instance();
        void open(const string& filename);
        void close();
        void log(Level level, const char* file, int line, const char* format, ...);
        private:
            Logger();
            ~Logger();
        private:
            string m_filename;
            fstream m_fout;
            static const char* s_level[LEVEL_COUNT];
            static Logger* m_instance;
        };
    }
}


#endif // LOGGER_H_
