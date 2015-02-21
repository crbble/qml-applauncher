#include "applicationlauncher_plugin.h"
#include "applicationlauncher.h"
#include "application.h"
// #include "unixmodel.h"
// #include "appsunixmodel.h"
#include <qqml.h>

void ApplicationLauncherPlugin::registerTypes(const char *uri)
{
    // @uri ApplicationLauncher
    qmlRegisterType<ApplicationLauncher>(uri, 1, 0 , "ApplicationLauncher");
    qmlRegisterType<Application>(uri, 1, 0, "Application");
}


