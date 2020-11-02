FILE(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testcrc ${SRCS})

TARGET_LINK_LIBRARIES(testcrc
    crc
    GTest::GTest
	GTest::Main
)

ADD_TEST(NAME testcrc COMMAND testcrc)

INSTALL(TARGETS testcrc DESTINATION "bin")