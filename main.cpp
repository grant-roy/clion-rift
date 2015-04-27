// Include the OculusVR SDK
#include <OVR.h>



using namespace std;

int main(int argc, char ** argv) {

    if (!ovr_Initialize()) {
        return -1;
    }
    int hmdCount = ovrHmd_Detect();
    for (int i = 0; i < hmdCount; ++i) {
        ovrHmd hmd = ovrHmd_Create(i);
        ovrHmd_Destroy(hmd);
    }

    ovrHmd hmd = ovrHmd_CreateDebug(ovrHmd_DK2);
    ovrHmd_Destroy(hmd);
    ovr_Shutdown();

    return 0;
}