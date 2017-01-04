#ifndef TEXT_FILE_FUNCTIONS_H
#define TEXT_FILE_FUNCTIONS_H

#include "datatypes.h"

#include <QString>
#include <QFile>

QString get_user_theme();
void write_to_serverlist_txt(QString p_line);
QVector<server_type> read_serverlist_txt();

#endif // TEXT_FILE_FUNCTIONS_H