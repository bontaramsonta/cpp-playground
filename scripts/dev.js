import nodemon from 'nodemon'
import { config } from 'dotenv'
import { resolve } from 'path'
config()

const base = resolve(process.env.BASE_DIR)
const exec = `g++ \
  -std=${process.env.CPP_VERSION} \
  -Wall -O2 \
  -o ${base}/${process.env.DEV_EXECUTABLE_NAME} \
  ${base}/${process.env.MAIN_FILENAME} \
  && ${base}/${process.env.DEV_EXECUTABLE_NAME}<${base}/in${process.env.WRITE_TO_OUTFILE === "true" ? `>${base}/${process.env.DEV_OUTPUT_FILENAME}` : ""}`
nodemon({
  exec,
  verbose: false,
  ext: '.cpp',
  watch: ['src/*.cpp', 'src/in'],
  events: {
    restart: 'clear'
  },
  colours: true
})

process.once('SIGINT', () => {
  process.exit(0)
})
