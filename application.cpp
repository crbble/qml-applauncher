#include "application.h"
#include    <QProcess>
#include <QDebug>
Application::Application(QObject *parent) :
    QObject(parent),
    m_process(new QProcess(this))
{
}
QString Application::appName() const
{
    return m_AppName;
}

void Application::setAppName(const QString &appName)
{
    m_AppName = appName;
}
QString Application::arguments() const
{
    return m_Arguments;
}
void Application::setArguments(const QString &arguments)
{
    m_Arguments = arguments;
}
void Application::launchScript()
{
    m_process->start(m_AppName +  m_Arguments);
    qDebug() << "launching application" << m_AppName << "\n with the Argument of \n" + m_Arguments  ;
}
QString Application::launchScriptGetSTDOUT()
{
    m_process->start(m_AppName +  m_Arguments);
    m_process->waitForFinished();
    return QString(m_process->readAllStandardOutput());
    qDebug() << "launching application" << m_AppName << "\n with the Argument of \n" + m_Arguments  ;
}
