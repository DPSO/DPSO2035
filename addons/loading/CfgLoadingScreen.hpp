#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\loading\##className##.paa); \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(AdobeStock_269676636,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_269676677,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_271859839,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_285905473,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_296841733,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_297308106,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_298480575,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_361616315,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_287796119,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_288887578,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_319048089,DPSO);
        LOADING_SCREEN_CLASS(maxresdefault,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_269677107,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_272813407,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_275306051,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_283924597,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_371890417,DPSO);
        LOADING_SCREEN_CLASS(AdobeStock_400370807,DPSO);
    };
};
