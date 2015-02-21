#ifndef APPLICATION_H
#define APPLICATION_H
#include <QObject>
#include <QProcess>
class Application : public QObject
{
    Q_OBJECT

public:
    explicit Application(QObject *parent = 0);
    Q_PROPERTY( QString         appName                 READ appName                 WRITE setAppName                 )
    Q_PROPERTY( QString         arguments                 READ arguments                 WRITE setArguments                 )

    QString appName() const;
    void setAppName(const QString &appName);
    QString arguments() const;
    void setArguments(const QString &arguments);
    Q_INVOKABLE void launchScript();
    Q_INVOKABLE QString launchScriptGetSTDOUT();

private:
    QProcess *m_process;
    QString m_AppName;
    QString m_Arguments;
};
#endif //APPLICATION_H
