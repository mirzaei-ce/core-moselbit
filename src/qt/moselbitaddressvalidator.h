// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MOSELBIT_QT_MOSELBITADDRESSVALIDATOR_H
#define MOSELBIT_QT_MOSELBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MoselbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MoselbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Moselbit address widget validator, checks for a valid moselbit address.
 */
class MoselbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MoselbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // MOSELBIT_QT_MOSELBITADDRESSVALIDATOR_H
