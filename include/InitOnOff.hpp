#ifndef LIMONP_INITONOFF_H
#define LIMONP_INITONOFF_H

namespace Limonp
{
    class InitOnOff
    {
        public:
            InitOnOff(){setInitFlag_(false);};
            ~InitOnOff(){};
        protected:
            bool isInited_;
            bool getInitFlag_()const{return isInited_;};
            bool setInitFlag_(bool flag){return isInited_ = flag;};
        public:
            operator bool(){return getInitFlag_();};

    };
}

#endif
