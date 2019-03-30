#include <templates/skeleton/logging.hpp>

#include <QtTest/QtTest>

// This file has been autogenerated by 'ExtensionSkeleton.qbs'.

namespace templates {
namespace skeleton {

class test_logging:
	public QObject
{
	Q_OBJECT

	private slots:
		void loggingCategory();
};

void test_logging::loggingCategory()
{
	QCOMPARE(templates::skeleton::loggingCategory().categoryName(), "Templates.Skeleton.0");
}

}
}

QTEST_MAIN(templates::skeleton::test_logging)
#include "test_logging.moc"

//(c)ANYONE: Copyright © 2019, Anyone. All rights reserved.
//(c)ANYONE: This file is a part of CuteHMI.
//(c)ANYONE: CuteHMI is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
//(c)ANYONE: CuteHMI is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
//(c)ANYONE: You should have received a copy of the GNU Lesser General Public License along with CuteHMI.  If not, see <https://www.gnu.org/licenses/>.