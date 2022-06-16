import nodemon from 'nodemon'
import { config } from 'dotenv'
config()
const exec = `g++ -std=${process.env.CPP_VERSION} -Wall -O2 -o ${process.env.DEV_EXECUTABLE_NAME} ${process.env.MAIN_FILENAME} && ./${process.env.DEV_EXECUTABLE_NAME}<in`
nodemon({
  exec,
  verbose: false,
  ext: '.cpp',
  watch: './*.cpp',
  events: {
    restart: 'clear'
  },
  colours: true
})

process.once('SIGINT', () => {
  process.exit(0)
})
