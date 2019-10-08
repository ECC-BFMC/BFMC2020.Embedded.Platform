/**
  ******************************************************************************
  * @file    Echoer.cpp
  * @author  RBRO/PJ-IU
  * @version V1.0.0
  * @date    day-month-year
  * @brief   This file contains the class implementation for the serial echoer
  *          functionality.
  ******************************************************************************
 */

#include <utils/examples/echoer.hpp>

namespace examples{
    /** \brief  Class constructor
     *
     *  Constructor method
     *
     *  \param f_period       echoer execution period
     *  \param f_serialPort   Serial communication object
     */
    CEchoer::CEchoer(uint32_t f_period, Serial& f_serialPort) 
        : task::CTask(f_period)
        , m_serialPort(f_serialPort)
    {
    }

    /** \brief  Periodically applied method. It sends a simple message to other device. 
     * 
     */
    void CEchoer::_run()
    {
        m_serialPort.printf(".\n\r");
    }

}; // namespace examples